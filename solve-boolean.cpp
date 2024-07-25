#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operators;
    stack<bool> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'f') {
            values.push(false);
        } else if (expression[i] == '&') {
            while (!operators.empty() && operators.top() != '|') {
                bool right = values.top(); values.pop();
                bool left = values.top(); values.pop();
                values.push(left && right);
                operators.pop();
            }
            operators.push('&');
        } else if (expression[i] == '|') {
            while (!operators.empty()) {
                if (operators.top() == '&') {
                    operators.pop();
                    break;
                }
                bool right = values.top(); values.pop();
                bool left = values.top(); values.pop();
                values.push(left || right);
            }
            operators.push('|');
        }
    }

    return values.top();
}