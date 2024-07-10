#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
            }
            if (!operatorStack.empty()) {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
        } else if (expression[i] == 'T' || expression[i] == 't') {
            return true;
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            return false;
        }
    }
    return true;
}