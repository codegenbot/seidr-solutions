#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operation;
    bool result = false;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            operation.push('(');
        } else if (expression[i] == ')') {
            while (!operation.empty() && operation.top() != '(') {
                char op = operation.top();
                operation.pop();
                result = (op == '|') ? true : false;
            }
            if (!operation.empty()) {
                operation.pop();  // Remove the '('
            }
        } else if (expression[i] == '|' || expression[i] == '&') {
            while (!operation.empty() && operation.top() != '(') {
                char op = operation.top();
                operation.pop();
                result = (op == '|') ? true : false;
            }
            operation.push(expression[i]);
        } else {
            if (expression[i] == 'T')
                result = true;
            else
                result = false;
        }
    }

    // Evaluate the remaining operations
    while (!operation.empty()) {
        char op = operation.top();
        operation.pop();
        result = (op == '|') ? true : false;
    }

    return result;
}