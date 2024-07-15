```
#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    if (s == "T" || s == "t") return true;
    if (s == "F" || s == "f") return false;
    
    bool a = solveBoolean(s.substr(0, s.find('&') ? s.find('|') : string::npos));
    bool b;
    size_t pos = s.find('&');
    if (pos != string::npos) {
        b = solveBoolean(s.substr(pos + 1));
        return a && b;
    }
    
    pos = s.find('|');
    if (pos != string::npos) {
        b = solveBoolean(s.substr(pos + 1));
        return a || b;
    }
    
    return false; // should not reach here
}

int main() {
    string s;
    cout << "Enter the Boolean expression: ";
    cin >> ws >> s;
    if (s.size() > 0) {
        bool result = solveBoolean(s);
        cout << (result ? "True" : "False") << endl;
    }
    return 0;
}