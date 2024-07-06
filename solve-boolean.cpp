```
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
            if (s[i + 1] == 't')
                f = t;
            else
                f = f;
            res &= f;
            i += 2;
        } else if (s[i] == '|') {
            if (s[i + 1] == 't')
                f = t;
            else
                f = f;
            res |= f;
            i += 2;
        }
    }

    return res;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    bool result = solveBoolean(s);
    if (result) 
    { 
        cout << "True" << endl; 
    } 
    else 
    { 
        cout << "False" << endl; 
    }
    return 0;
}