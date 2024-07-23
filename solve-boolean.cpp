#include <string>

string solveBoolean(string expression) {
    bool result = (expression == "T") || (expression == "true");
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            result &= solveBoolean(left) && solveBoolean(right);
        } else if(expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            result |= solveBoolean(left) || solveBoolean(right);
        }
    }
    return (result) ? "True" : "False";
}