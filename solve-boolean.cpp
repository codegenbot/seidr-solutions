#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    if (s == "T" || s == "t") return true;
    if (s == "F" || s == "f") return false;
    
    bool a = (s.length() > 0 ? solveBoolean(s.substr(0, s.find('&') ? s.find('|') : string::npos)) : true);
    size_t pos = s.find('&');
    if (pos != string::npos) {
        bool b = solveBoolean(s.substr(pos + 1));
        return a && b;
    }
    
    pos = s.find('|');
    if (pos != string::npos) {
        bool b = solveBoolean(s.substr(pos + 1));
        return a || b;
    }
    
    return a; // handle single operand
}

int main() {
    string s;
    cout << "Enter the Boolean expression: ";
    cin >> s;
    if (s.size() > 0) {
        bool result = solveBoolean(s);
        cout << (result ? "True" : "False") << endl;
    }
    return 0;
}