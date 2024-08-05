#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t")
        return true;
    else if (expression == "F" || expression == "f")
        return false;
    else if (expression.length() > 1) {
        int i = 0;
        while (i < expression.length()) {
            if (expression[i] == '|') {
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);
                return solveBoolean(left) || solveBoolean(right);
            }
            else if (expression[i] == '&') {
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);
                return solveBoolean(left) && solveBoolean(right);
            }
            i++;
        }
    }
    return false;
}