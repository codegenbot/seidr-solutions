#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            return solveBoolean(left) || solveBoolean(right);
        }
        else if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    // If no '&' or '|' is found in the expression, it's a single boolean value
    if (s == "t") return true;
    if (s == "f") return false;
    return false;  // Default to False if none of the above conditions are met
}

int main() {
    cout << (solveBoolean("t") ? "True" : "False") << endl;  // True
    cout << (solveBoolean("f") ? "True" : "False") << endl;  // False
    cout << (solveBoolean("f&f") ? "True" : "False") << endl; // False
    cout << (solveBoolean("f&t") ? "True" : "False") << endl; // False
    cout << (solveBoolean("t&f") ? "True" : "False") << endl; // False
    return 0;
}