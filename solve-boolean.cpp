#include <string>

bool solveBoolean(std::string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            if (result) result = false;
        } else if (expression[i] == '&') {
            result = true;
        } else if (expression[i] == 'T') {
            if (!result) return true;
        } else if (expression[i] == 'F') {
            return false;
        }
    }
    return result;
}