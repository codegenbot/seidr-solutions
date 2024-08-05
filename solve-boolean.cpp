#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '|')
                s.pop();
            if (i + 1 < expression.size() && expression[i + 1] == '&') {
                i++;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) s.pop();
            if (i + 1 < expression.size() && expression[i + 1] == '|') {
                i++;
            }
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}

int main() {
    string expression;
    cout << "Enter a boolean expression: ";
    cin >> expression;
    if (expression.size() > 0) {
        bool result = evaluateBooleanExpression(expression);
        if (result)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}