#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t")
        return true;
    else if (expression == "F" || expression == "f")
        return false;
    else if (expression.length() > 1 && expression[0] == '&') {
        string left = expression.substr(1, 1);
        string right = expression.substr(2);
        return solveBoolean(left) && solveBoolean(right);
    } else if (expression.length() > 1 && expression[0] == '|') {
        string left = expression.substr(1, 1);
        string right = expression.substr(2);
        return solveBoolean(left) || solveBoolean(right);
    }
    return false;
}