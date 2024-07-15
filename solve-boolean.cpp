#include <string>

bool solveBoolean(std::string expression) {
    bool result = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            return true;
        }
        else if (expression[i] == 'F') {
            return false;
        }
        else if (expression[i] == '&') {
            i++; // Move to the next character
            bool operand1 = expression[i] == 'T';
            bool operand2 = !!(i < expression.length() && expression[++i] == 'T');
            result &= operand2;
        }
        else if (expression[i] == '|') {
            i++; // Move to the next character
            bool operand1 = expression[i] == 'T';
            bool operand2 = !!i;
            result |= operand2;
        }
        i++;
    }

    return result;
}