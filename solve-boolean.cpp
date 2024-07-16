#include <string>

bool evaluateBoolean(string expression) {
    stack<char> ops;
    stack<bool> vals;

    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            bool b = vals.top();
            vals.pop();
            bool a = vals.top();
            vals.pop();
            vals.push(a && b);
            ops.push('&');
        } else if (expression[i] == '|') {
            bool b = vals.top();
            vals.pop();
            bool a = vals.top();
            vals.pop();
            vals.push(a || b);
            ops.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            vals.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            vals.push(false);
        }
    }

    return vals.top();
}