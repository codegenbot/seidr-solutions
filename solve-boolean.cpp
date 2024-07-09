#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool evaluateBooleanExpression(const string &input) {
    stack<bool> s;
    for (char c : input) {
        if (c == 't' || c == 'T') {
            s.push(true);
        } else if (c == 'f' || c == 'F') {
            s.push(false);
        } else if (c == '&') {
            bool operand2 = s.top(); s.pop();
            bool operand1 = s.top(); s.pop();
            s.push(operand1 && operand2);
        } else if (c == '|') {
            bool operand2 = s.top(); s.pop();
            bool operand1 = s.top(); s.pop();
            s.push(operand1 || operand2);
        }
    }
    return s.top();
}

int main() {
    string input;
    cin >> input;

    if (evaluateBooleanExpression(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}