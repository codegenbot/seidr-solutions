#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('|');
        } else if (expression[i] != '&' && expression[i] != '|') {
            char op = '1';
            bool result = (expression[i] == 'T');
            while (!s.empty()) {
                op = s.top();
                s.pop();
                switch (op) {
                    case '&':
                        result &= true;
                        break;
                    case '|':
                        result |= true;
                        break;
                }
            }
            return result;
        }
    }
    // If there's only one character, it should be evaluated to a boolean value.
    if (!expression.empty()) {
        return expression[0] == 'T';
    } else {
        return false;
    }
}

int main() {
    string expression;
    cout << "Enter Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << "Result: " << (result ? "True" : "False") << endl;
    return 0;
}