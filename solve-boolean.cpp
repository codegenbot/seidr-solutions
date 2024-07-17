```cpp
#include <string>

bool solveBoolean(std::string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;

    bool result = true;
    int i = 0;
    for (; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            std::string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        }
    }

    if (i < expression.size() && expression[i] == '|') {
        int j = i + 1;
        while (j < expression.size()) j++;
        std::string subexpr2 = expression.substr(i + 1, j - i);
        result |= solveBoolean(subexpr2);
    }

    return !result;
}