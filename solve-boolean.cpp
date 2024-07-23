#include <iostream>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<string> operators;
    string operand = "";
    int i = 0; 

    for (i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == "|") {
                operators.pop();
            }
            if (!operand.empty()) {
                if (operand == "T")
                    operand = "True";
                else
                    operand = "False";

                return operand == "True";
            }
        } 
        else if (expression[i] == '|') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                if (operand == "T")
                    operand = "True";
                else
                    operand = "False";

                return operand == "True";
            }
        } 
        else if (expression[i] == 't' || expression[i] == 'f') {
            if (!operators.empty() && ((expression[i] == 't' && operators.top() == "|") ||
                                        (expression[i] == 'f' && operators.top() == "&"))) {
                while (!operators.empty()) operators.pop();
            }
            operand += (expression[i] == 't'? "T" : "F");
        } 
        else if (expression[i] == '(') {
            operators.push("(");
        } 
        else if (expression[i] == ')') {
            while (operators.top() != "(") {
                if (expression[i] == '|') {
                    while (!operators.empty() && operators.top() == "|") {
                        operators.pop();
                    }
                    if (!operand.empty()) {
                        return operand == "T";
                    }
                } 
                else if (expression[i] == '&') {
                    while (!operators.empty()) operators.pop();
                    if (!operand.empty()) {
                        return operand == "T";
                    }
                }

                operators.pop();
            }
            operators.pop();
        }
    }

    while (!operators.empty()) {
        if (expression[i] == '|') {
            while (!operators.empty() && operators.top() == "|") {
                operators.pop();
            }
            if (!operand.empty()) {
                return operand == "T";
            }
        } 
        else if (expression[i] == '&') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                return operand == "T";
            }
        }

        operators.pop();
    }

    if (!operand.empty())
        return operand == "True";

    return true;
}