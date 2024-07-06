#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            res = (s[i+1] == '&') ? (res & t) : (res | t);
        } else if (s[i] == 'f') {
            res = (s[i+1] == '&') ? (res & f) : (res | f);
        } else if (s[i] == '|') {
            if (i > 0 && s[i-1] == 't') t = f;
            if (i < s.length() - 1 && s[i+1] == 't') f = true;
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
    return 0;}