#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string s) {
    if(s == "T" || s == "t") return true;
    if(s == "F" || s == "f") return false;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            
            bool leftVal = solveBoolean(left);
            bool rightVal = solveBoolean(right);
            
            return leftVal && rightVal;
        }
    }
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            
            bool leftVal = solveBoolean(left);
            bool rightVal = solveBoolean(right);
            
            return leftVal || rightVal;
        }
    }
    
    return false; // This line will never be reached
}

int main() {
    cout << (solveBoolean("t") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("f") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("f&f") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("f&t") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("t&f") ? "True" : "False");
    return 0;
}