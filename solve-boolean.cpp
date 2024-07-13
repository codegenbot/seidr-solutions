#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = false;
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool b1 = values.top();
            values.pop();
            bool b2 = values.top();
            values.pop();
            values.push(b1 && b2);
            ops.push('&');
        } else if (expression[i] == '|') {
            bool b1 = values.top();
            values.pop();
            bool b2 = values.top();
            values.pop();
            values.push(b1 || b2);
            ops.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        }
    }

    while (!ops.empty()) {
        char op = ops.top();
        ops.pop();
        bool b1 = values.top();
        values.pop();
        bool b2 = values.top();
        values.pop();
        if (op == '&') {
            values.push(b1 && b2);
        } else if (op == '|') {
            values.push(b1 || b2);
        }
    }

    return values.top();
}