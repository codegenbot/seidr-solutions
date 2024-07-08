#include <string>

bool solveBoolean(string expression) {
    bool res = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            if (expression[i+1] == 'T')
                res = true;
            else
                res = false;
            i++;
        } else if (expression[i] == '&') {
            if (expression[i+1] == 'T')
                res &= true;
            else
                res &= false;
            i++;
        }
    }
    return res;
}