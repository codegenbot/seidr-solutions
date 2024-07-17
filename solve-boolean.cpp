#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    bool currentBoolean = (booleanExpression[0] == 'T');

    for(int i = 1; i < booleanExpression.size(); ++i) {
        if(booleanExpression[i] == '|') {
            while(!operationStack.empty() && operationStack.top() == '&') {
                operationStack.pop();
                currentBoolean ^= true;
            }
            operationStack.push('|');
        } else if (booleanExpression[i] == '&') {
            operationStack.push('&');
        } else {
            bool nextBoolean = (booleanExpression[i] == 'T');
            while(!operationStack.empty() && operationStack.top() != '|') {
                operationStack.pop();
                currentBoolean &= nextBoolean;
            }
            if(!operationStack.empty()) {
                operationStack.pop();
                currentBoolean ^= true;
            } else {
                currentBoolean = nextBoolean;
            }
        }
    }

    return currentBoolean;
}