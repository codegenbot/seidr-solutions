#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (!expression.empty()) {
                expression.pop();
            }
        } else if (booleanExpression[i] == '&') {
            expression.push('&');
        } else if (booleanExpression[i] == 'T' || booleanExpression[i] == 'F') {
            while (!expression.empty() && expression.top() != '|') {
                expression.pop();
            }
            if (!expression.empty()) {
                expression.pop();
            }
            char result = expression.top() == '&' ? (booleanExpression[i] == 'T') : (booleanExpression[i] == 'T');
            expression.pop();
        }
    }
    
    return !expression.empty();
}