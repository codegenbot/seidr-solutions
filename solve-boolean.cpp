#include <cstddef>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = false;
    size_t i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            break;
        } else if (expression[i] == 'F') {
            result = false;
            break;
        } else if (expression[i] == '|') {
            i++;
        } else if (expression[i] == '&') {
            i++;
        }
        i++;
    }

    return result;
}