#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            char leftOp = s.top();
            s.pop();
            char rightOp = s.top();
            s.pop();
            if ((leftOp == 'T' && rightOp == 'T') || (leftOp == 'F' && rightOp == 'F')) {
                s.push('T');
            } else {
                s.push('F');
            }
        } else if (expression[i] == '&') {
            char leftOp = s.top();
            s.pop();
            char rightOp = s.top();
            s.pop();
            if ((leftOp == 'T' && rightOp == 'T') || (leftOp == 'F' && rightOp == 'F')) {
                s.push('T');
            } else {
                s.push('F');
            }
        } else {
            s.push(expression[i]);
        }
    }
    return (s.top() == 'T');
}