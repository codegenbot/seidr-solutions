#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> ops;
    bool result = false;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'F') {
            result = false;
        } else if (expression[i] == '&') {
            while (!ops.empty() && ops.top() == '&') {
                ops.pop();
            }
            ops.push('&');
        } else if (expression[i] == '|') {
            while (!ops.empty() && ops.top() == '&') {
                ops.pop();
            }
            ops.push('|');
        }
    }

    while (!ops.empty()) {
        char op = ops.top(); ops.pop();
        bool b1 = result;
        result = (op == '&') ? (b1 && false) : (b1 || false);
    }

    return result;
}