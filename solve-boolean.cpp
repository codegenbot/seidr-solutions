#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    bool result = false;
    bool operand = true;
    char operation = '|';

    for (char c : expr) {
        if (c == 't') {
            operand = true;
        } else if (c == 'f') {
            operand = false;
        } else if (c == '&' || c == '|') {
            operation = c;
        } else {
            if (operation == '|') {
                result = result || operand;
            } else {
                result = result && operand;
            }
        }
    }

    return result;
}