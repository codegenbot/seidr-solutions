#include <string>

bool solveBoolean(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;

    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        }
    }
    if (expression[i] == '|') {
        int j = i + 1;
        while (j < expression.size() && expression[j] != ' ') j++;
        string subexpr2 = expression.substr(i + 1, j - i);
        result |= solveBoolean(subexpr2);
    }

    return !result;
}