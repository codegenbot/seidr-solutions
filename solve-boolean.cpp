#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '&') {
                operationStack.pop();
            }
        } else if (booleanExpression[i] == '|') {
            while (!operationStack.empty()) {
                operationStack.pop();
            }
        } else if (booleanExpression[i] == 'T' || booleanExpression[i] == 'F') {
            if (i < booleanExpression.length() - 1 && (booleanExpression[i + 1] == '&' || booleanExpression[i + 1] == '|')) {
                operationStack.push(booleanExpression[i]);
                i++;
            } else {
                return booleanExpression[i] == 'T';
            }
        }
    }
    return true;
}