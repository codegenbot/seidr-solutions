#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = t;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 't') {
            if (s[i + 1] == '&') {
                res &= t;
                i += 2;
            } else if (s[i + 1] == '|') {
                return true;
            }
        } else if (c == 'f') {
            if (s[i + 1] == '&') {
                res &= f;
                i += 2;
            } else if (s[i + 1] == '|') {
                return false;
            }
        }
    }

    return res;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}