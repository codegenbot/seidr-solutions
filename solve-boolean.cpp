#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = t;

    bool op = false;
    char c;

    for (int i = 0; i < s.length(); i++) {
        c = s[i];
        if (c == 't' || c == 'f') {
            if (op) {
                res = (c == 't') ? (res | true) : (res | false);
            } else {
                res = (c == 't') ? true : false;
            }
            op = c != 't';
        } else if (c == '|') {
            op = true;
        } else if (c == '&') {
            op = false;
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