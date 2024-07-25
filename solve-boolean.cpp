#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string s) {
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') return true;
        else if (s[i] == 'F') return false;
        else if (s[i] == '|') {
            i++;
            bool a = solveBoolean(s.substr(i));
            i += s.find('&', i) - 1;
            bool b = solveBoolean(s.substr(i + 1, s.find('&', i + 1) - i - 1));
            return a || b;
        } else if (s[i] == '&') {
            i++;
            bool a = solveBoolean(s.substr(i));
            i += s.find('|', i) - 1;
            bool b = solveBoolean(s.substr(i + 1, s.find('|', i + 1) - i - 1));
            return a && b;
        }
        i++;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}