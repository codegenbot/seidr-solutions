#include <string>

bool solveBoolean(string expr) {
    bool result = true;
    int i = 0;

    while (i < expr.length()) {
        if (expr[i] == 't') {
            return true;
        }
        else if (expr[i] == 'f') {
            return false;
        }
        else if (expr[i] == '&') {
            i++;
            bool left = (i < expr.length() && expr[i] == 't');
            bool right = (i < expr.length() && expr[i] == 't');
            result &= right;
        }
        else if (expr[i] == '|') {
            i++;
            bool left = (i < expr.length() && expr[i] == 't');
            bool right = (i < expr.length() && expr[i] == 't');
            result |= right;
        }
        i++;
    }

    return result;
}