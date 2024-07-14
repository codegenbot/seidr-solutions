#include <string>
#include <stack>
using namespace std;

stack<char> operation;

bool evaluateBooleanExpression(string expression) {
    stack<char> operation;
    string currentTerm = "";

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            operation.push('(');
        } else if (expression[i] == ')') {
            while (!operation.empty() && operation.top() != '(') {
                char op = operation.top();
                operation.pop();
                currentTerm += op;
            }
            if (!operation.empty()) {
                operation.pop();  // Remove the '('
            }
            currentTerm += ')';
        } else if (expression[i] == '|' || expression[i] == '&') {
            while (!operation.empty() && operation.top() != '(') {
                char op = operation.top();
                operation.pop();
                currentTerm += op;
            }
            operation.push(expression[i]);
        } else {
            currentTerm += expression[i];
        }
    }

    // Evaluate the remaining operations
    while (!operation.empty()) {
        char op = operation.top();
        operation.pop();
        currentTerm += op;
    }

    bool result = (currentTerm == "T") ? true : false;

    return result;