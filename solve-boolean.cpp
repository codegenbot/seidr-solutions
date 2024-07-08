#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            while (i < s.length() && s[i] != '&') {
                i++;
            }
        } else if (s[i] == '|') {
            i++;
            while (i < s.length() && s[i] != '|') {
                i++;
            }
        } else if (s[i] == 'T' || s[i] == 'F') {
            i++;
        }
    }
    return (s[0] == 'T');
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}