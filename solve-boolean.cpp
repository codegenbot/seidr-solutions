#include <string>

bool solveBoolean(const string &expression) {
    int result = 0;

    for (int i = 0; i < expression.size(); ++i) {
        if (expression[i] == 'T') {
            result |= 1;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '&') {
            int left = result & 1;
            result >>= 1;
            result &= -left;
        } else if (expression[i] == '|') {
            int left = result & 1;
            result >>= 1;
            result |= left;
        }
    }

    return result != 0;
}