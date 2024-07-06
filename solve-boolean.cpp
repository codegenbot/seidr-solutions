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
            res = (s[i + 1] == '&') ? (res & t) : (res | t);
            i += (s[i + 1] == '|') ? 2 : 1;
        } else if (c == 'f') {
            res = (s[i + 1] == '&') ? (res & f) : (res | f);
            i += (s[i + 1] == '|') ? 2 : 1;
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