#include <string>

bool evaluateBooleanExpression(std::string expression) {
    bool result = true;
    int i = 0;
    
    while (i < expression.length()) {
        if (expression[i] == '&') {
            result &= (expression[i + 1] == 'T');
            i += 2;
        } else if (expression[i] == '|') {
            result |= (expression[i + 1] == 'T');
            i += 2;
        } else {
            result = expression[i] == 'T';
            i++;
        }
    }
    
    return result;
}