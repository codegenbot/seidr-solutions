#include <vector>
#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    if (s == "T") return true;
    if (s == "F") return false;
    
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '|') break;
        i++;
    }
    
    string left = s.substr(0, i);
    string right = s.substr(i + 1);
    
    return solveBoolean(left) || solveBoolean(right);
}

int main() {
    // Your code to read input from user and print output
    string s;
    cin >> s;
    bool result = solveBoolean(s);
    cout << (result ? "True" : "False") << endl;
    return 0;
}