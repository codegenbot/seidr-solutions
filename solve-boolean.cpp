#include <iostream>
#include <string>

std::string solveBoolean(std::string expression) {
    if(expression == "T" || expression == "true") {
        return "True";
    }
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            if(solveBoolean(left) == "False" && solveBoolean(right) == "False")
                return "False";
        } else if(expression[i] == '|') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            if(solveBoolean(left) == "True" || solveBoolean(right) == "True")
                return "True";
        }
    }
    return expression;
}