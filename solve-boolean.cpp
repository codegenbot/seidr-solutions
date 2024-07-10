#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<char> operators;
    stack<bool> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
                values.pop();
            }
            operators.push('&');
        } else if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        }
    }

    bool result = values.top();
    while (!operators.empty()) {
        if (operators.top() == '&') {
            operators.pop();
            result &= values.top();
            values.pop();
        } else {
            operators.pop();
            result |= values.pop();
        }
    }

    return result;
}