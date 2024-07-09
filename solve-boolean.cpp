#include <bits/stdc++.h>
using namespace std;

bool solveBoolean(const string& s) {
    bool result = true;
    size_t i = 0, n = s.size();

    while (i < n) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            result = result || solveBoolean(s.substr(i + 1));
            i = n; // skip the rest of the string
        } else if (s[i] == '&') {
            bool temp = true;
            for (; i < n && s[i] != '|' && s[i] != '&' && s[i] != 'F'; i++) {
                if (s[i] == 'T')
                    temp = true;
                else
                    temp = false;
            }
            result = temp && solveBoolean(s.substr(i));
            i = n; // skip the rest of the string
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    getline(cin, input);
    bool result = solveBoolean(input);
    if (result) {
        cout << "The result is True." << endl;
    } else {
        cout << "The result is False." << endl;
    }
    return 0;
}