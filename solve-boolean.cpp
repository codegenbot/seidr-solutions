```
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            if (!temp) return false;
        } else if (s[i] == '&') {
            if (!result) return false;
            bool temp = result;
            result = !result;
            if (result && temp) return true;
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}