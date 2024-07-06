#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    string op;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'T' || s[i] == 't') {
            res = (op == "|") ? true : res;
            op = "";
        } else if(s[i] == 'F' || s[i] == 'f') {
            res = (op == "&") ? false : res;
            op = "";
        } else if(s[i] == '&' || s[i] == '|') {
            op = (s[i] == '&') ? "&" : "|";
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