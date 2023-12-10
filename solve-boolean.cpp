#include <string>
#include <iostream>
#include <cmath>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "t") return true;
    else if (expression == "f") return false;
    else {
        int i = 0, j = 1;
        while (j < expression.size()) {
            if (expression[i] == '&') {
                if (expression[j] == 't' || expression[j] == 'f') {
                    return solveBoolean(expression.substr(0, i)) && solveBoolean(expression.substr(j + 1));
                } else {
                    return false;
                }
            } else if (expression[i] == '|') {
                if (expression[j] == 't' || expression[j] == 'f') {
                    return solveBoolean(expression.substr(0, i)) || solveBoolean(expression.substr(j + 1));
                } else {
                    return false;
                }
            } else if (expression[i] != 't' && expression[i] != 'f') {
                return false;
            }
        }
    }
}