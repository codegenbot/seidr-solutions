#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            result &= evaluate(s, i + 1);
        } else if (s[i] == '|') {
            result |= evaluate(s, i + 1);
        }
        i++;
    }
    return result;
}

bool evaluate(string s, int &i) {
    bool result = true;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            i++;
            result &= evaluate(s, i);
        } else if (s[i] == '|') {
            i++;
            result |= evaluate(s, i);
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}