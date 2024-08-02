#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;

    int i = 0, j = 0;
    while(j<s.length()) {
        if(s[j] == '|') break;
        j++;
    }
    string left = (j < s.length()) ? s.substr(0, j) : s; 
    
    j++;
    while(j<s.length()) {
        if(s[j] == '&') break;
        j++;
    }
    string right = (s.length() > j) ? s.substr(j) : "";

    return solveBoolean(left) || solveBoolean(right);
}

int main() {
    cout << (solveBoolean("t") ? "True" : "False") << endl;  
    cout << (solveBoolean("f") ? "True" : "False") << endl;  
    cout << (solveBoolean("f&f") ? "True" : "False") << endl; 
    cout << (solveBoolean("f&t") ? "True" : "False") << endl; 
    cout << (solveBoolean("t&f") ? "True" : "False") << endl; 
    return 0;
}