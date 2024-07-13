```cpp
#include <string>
#include <stack>
#include <stdexcept>

bool solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for(int i = 0; i < booleanExpression.length(); i++) {
        if(booleanExpression[i] == '&') {
            while(expression.size() && expression.top() == '&') {
                expression.pop();
            }
        } else if(booleanExpression[i] == '|') {
            while(expression.size() && expression.top() == '|') {
                expression.pop();
            }
        } else {
            expression.push(boolToChar(getBooleanValue(booleanExpression[i])));
        }
    }
    
    return expression.top() == 'T';
}

char boolToChar(bool value) {
    if(value) {
        return 'T';
    } else {
        return 'F';
    }
}

bool getBooleanValue(char c) {
    if(c == 't' || c == 'T') {
        return true;
    } else if(c == 'f' || c == 'F') {
        return false;
    } else {
        throw runtime_error("Invalid input");
    }
}