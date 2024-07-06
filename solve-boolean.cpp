```
#include <string>
#include <iostream> 
using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = t;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            res &= f;
        } else if (s[i] == '|') {
            res |= f;
            f = t;
            t = false;
        } else if (s[i] == 't') {
            t = true;
            f = false;
        } else if (s[i] == 'f') {
            t = false;
            f = true;
        } else {
            res &= (s[i] == 't');
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