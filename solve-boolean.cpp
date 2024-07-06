#include <string>
#include <iostream> 
using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = t;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == 't') {
            res = true;
            i++;
        } else if (s[i] == 'f') {
            res = false;
            i++;
        } else if (s[i] == '&') {
            res &= f;
            i++;
            if (i < s.length() && (s[i] == 't' || s[i] == 'f')) {
                f = (s[i] == 't');
                i++;
            }
        } else if (s[i] == '|') {
            res |= f;
            i++;
            if (i < s.length() && (s[i] == 't' || s[i] == 'f')) {
                f = (s[i] == 't');
                i++;
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