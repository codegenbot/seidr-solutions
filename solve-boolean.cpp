```
#include <string>
bool solveBoolean(std::string expression) {
    bool result = true;
    int i = -1; // declare and initialize
    for (int j = 0; j <= expression.size(); j++) {
        if (i + 1 < j && (expression[i+1] == '&' || expression[i+1] == '|')) {
            std::string subexpr = expression.substr(i + 2, j - i - 2);
            if (expression[i+1] == '&') result &= solveBoolean(subexpr);
            else result |= solveBoolean(subexpr);
        }
        i++;
    }
    return !result;
}