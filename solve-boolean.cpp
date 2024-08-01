#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    if (s == "T" || s == "t")
        return true;
    else if (s == "F" || s == "f")
        return false;
    else if (s.length() > 1)
        for (int i = 0; i < s.length(); ++i) {
            bool left = solveBoolean(s.substr(0, i));
            bool right = solveBoolean(s.substr(i + 1));
            if (s[i] == '&')
                return left && right;
            else
                return left || right;
        }
    return false; // default value
}

int main() {
    string s;
    cout << "Enter Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}