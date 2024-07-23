#include <string>

string solveBoolean(string expression) {
    if (expression == "T" || expression == "true") {
        return "True";
    }
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            if (expression[i+1] == '&') {
                return solveBoolean(left) && solveBoolean(right) ? "True" : "False";
            } else if (expression[i+1] == '|') {
                return solveBoolean(left) && solveBoolean(right) ? "True" : solveBoolean(right) ? "True" : "False";
            }
        } else if(expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            if (expression[i+1] == '&') {
                return solveBoolean(left) || solveBoolean(right) ? "True" : "False";
            } else if (expression[i+1] == '|') {
                return solveBoolean(left) || solveBoolean(right) ? "True" : solveBoolean(left) ? "True" : "False";
            }
        }
    }
    return expression == "T" ? "True" : "False";
}