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
    string left = s.substr(0, j);

    if(left.back() == '&') {
        return solveBoolean(left.substr(0, left.length()-1)) && solveBoolean(left.back() == '&' ? left.substr(1) : left.substr(1,left.length()-2));
    } else {
        return solveBoolean(left);
    }

    return false;
}

int main() {
    // test cases
    cout << (solveBoolean("t") ? "True" : "False") << endl;  // True
    cout << (solveBoolean("f") ? "True" : "False") << endl;  // False
    cout << (solveBoolean("f&f") ? "True" : "False") << endl; // False
    cout << (solveBoolean("f&t") ? "True" : "False") << endl; // False
    cout << (solveBoolean("t&f") ? "True" : "False") << endl; // False
    return 0;
}