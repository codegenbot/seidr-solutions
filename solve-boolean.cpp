#include <bits/stdc++.h>
using namespace std;

bool solveBoolean(const string& s) {
    bool result = true;
    size_t i = 0;

    while (i < s.size()) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        }
        i++;
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