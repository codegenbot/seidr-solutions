#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(const string& booleanExp) {
    stack<char> s;
    bool result = false;

    for (int i = 0; i < booleanExp.length(); ++i) {
        if (booleanExp[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else {
                result = false;
            }
        } else if (booleanExp[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                result = true;
            } else {
                result = true;
            }
        } else {
            s.push(booleanExp[i]);
        }
    }

    return result;
}

int main() {
    string booleanExp;
    cout << "Enter a Boolean expression: ";
    cin >> booleanExp;

    bool result = solveBoolean(booleanExp);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}