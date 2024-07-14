#include <iostream>
using namespace std;

bool evaluateBoolean(string s) {
    stack<char> operation;
    stack<bool> operands;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            bool b1 = operands.top();
            operands.pop();
            bool b2 = operands.top();
            operands.pop();
            operands.push(b1 && b2);
            operation.pop();
        } else if (s[i] == '|') {
            bool b1 = operands.top();
            operands.pop();
            bool b2 = operands.top();
            operands.pop();
            operands.push(b1 || b2);
            operation.pop();
        } else if (s[i] == 'T' || s[i] == 't') {
            operands.push(true);
        } else if (s[i] == 'F' || s[i] == 'f') {
            operands.push(false);
        }
    }

    return operands.top();
}

int main() {
    string s;
    cin >> s;
    cout << evaluateBoolean(s) << endl;
    return 0;
}