#include <bits/stdc++.h>
using namespace std;

bool solveBoolean(const string& s, size_t& i) {
    bool result = true;

    if (i < s.size()) {
        switch (s[i]) {
            case 'T':
                return true;
            case 'F':
                return false;
            case '&': {
                i++; // skip &
                result &= solveBoolean(s, ++i);
                break;
            }
            case '|': {
                i++; // skip |
                result = result || solveBoolean(s, ++i);
                break;
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    getline(cin, input);

    size_t i = 0;
    bool result = solveBoolean(input, i);

    if (result) {
        cout << "The result is True." << endl;
    } else {
        cout << "The result is False." << endl;
    }

    return 0;
}