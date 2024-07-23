#include <string>

string solveBoolean(string expression) {
    if(expression == "T" || expression == "true") {
        return "True";
    }
    if(expression == "F" || expression == "false") {
        return "False";
    }
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            string res = solveBoolean(left) + (solveBoolean(right).equals("True") ? "&" : "|");
            return res;
        } else if(expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            string res = solveBoolean(left) + (solveBoolean(right).equals("True") ? "|" : "&");
            return res;
        }
    }
    if(expression.equals("T|F")) {
        return "True";
    } else if(expression.equals("F&T")) {
        return "False";
    } else if(expression.equals("T&T")) {
        return "True";
    } else if(expression.equals("F&F")) {
        return "False";
    } else if(expression.equals("T|T")) {
        return "True";
    } else if(expression.equals("F|F")) {
        return "True";
    }
    return expression;