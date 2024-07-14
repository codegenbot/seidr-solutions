#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') {
            return t;
        } else if (s[i] == 'F' || s[i] == 'f') {
            return f;
        } else if (s[i] == '&') {
            bool temp = t;
            t = f;
            f = temp;
        } else if (s[i] == '|') {
            bool temp = t;
            t = f | t;
            f = temp;
        }
    }
    
    return t;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}