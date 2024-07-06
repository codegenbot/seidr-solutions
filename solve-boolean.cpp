#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            return t && f;
        } else if (s[i] == '|') {
            return t || f;
        } else if (s[i] == 't' || s[i] == 'T') {
            t = true;
            f = false;
        } else if (s[i] == 'f' || s[i] == 'F') {
            t = false;
            f = true;
        }
    }

    return t;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    s = "";
    while (getchar() != '\n') {
        s += getchar();
    }
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;