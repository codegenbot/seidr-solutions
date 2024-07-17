#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> operation;
    stack<bool> value;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            bool right = value.top();
            value.pop();
            bool left = value.top();
            value.pop();
            value.push(left && right);
        } else if (s[i] == '|') {
            bool right = value.top();
            value.pop();
            bool left = value.top();
            value.pop();
            value.push(left || right);
        } else if (s[i] == 'T') {
            value.push(true);
        } else if (s[i] == 'F') {
            value.push(false);
        }
    }

    return value.top();
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;

    bool result = solveBoolean(s);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}