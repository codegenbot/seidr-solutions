#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            t = (i + 1 < s.length() && s[i+1] == '&') ? (t & (i+2<s.length() && s[i+2]=='t')) : ((i+2<s.length())&&(s[i+2]=='|'||s[i+2]=='f'))? t | true : false;
            i += (s[i + 1] == '|') ? 2 : 1;
        } else if (s[i] == 'f') {
            f = (i + 1 < s.length() && s[i+1] == '&') ? (f & (i+2<s.length() && s[i+2]=='f')) : ((i+2<s.length())&&(s[i+2]=='|'||s[i+2]=='t'))? f | false : true;
            i += (s[i + 1] == '|') ? 2 : 1;
        }
    }

    return t;
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