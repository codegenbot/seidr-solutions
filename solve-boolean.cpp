#include <string>

bool solveBoolean(string expression) {
    bool res = true;
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == '&') {
            res &= (expression[i+1] == 'T');
            i += 2;
        } else if (expression[i] == '|') {
            res |= (expression[i+1] == 'T');
            i += 2;
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            return false; 
        }
        i++;
    }
    return res;
}