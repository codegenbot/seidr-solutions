#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operators;
    string operand = "";

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            if (!operand.empty()) {
                if (operand == "T") operand = "False";
                else operand = "True";

                return (operand == "True");
            }
        } else if (expression[i] == '|') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                if (operand == "T") operand = "True";
                else operand = "False";

                return (operand == "True");
            }
        } else if (expression[i] == 't' || expression[i] == 'f') {
            if (!operators.empty() && ((expression[i] == 't' && operators.top() == '|') ||
                                        (expression[i] == 'f' && operators.top() == '&'))) {
                while (!operators.empty()) operators.pop();
            }
            operand += expression[i];
        } else {
            continue;
        }

        if (expression[i] == '(') {
            operators.push(expression[i]);
        } else if (expression[i] == ')') {
            while (operators.top() != '(') {
                if (expression[i] == '|') {
                    while (!operators.empty() && operators.top() == '|') {
                        operators.pop();
                    }
                    if (!operand.empty()) {
                        if (operand == "T") operand = "True";
                        else operand = "False";

                        return (operand == "True");
                    }
                } else if (expression[i] == '&') {
                    while (!operators.empty()) operators.pop();
                    if (!operand.empty()) {
                        if (operand == "T") operand = "True";
                        else operand = "False";

                        return (operand == "True");
                    }
                }

                operators.pop();
            }
            operators.pop();
        }
    }

    while (!operators.empty()) {
        if (expression[i] == '|') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            if (!operand.empty()) {
                if (operand == "T") operand = "True";
                else operand = "False";

                return (operand == "True");
            }
        } else if (expression[i] == '&') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                if (operand == "T") operand = "True";
                else operand = "False";

                return (operand == "True");
            }
        }

        operators.pop();
    }

    if (!operand.empty()) {
        if (operand == "T") operand = "True";
        else operand = "False";

        return (operand == "True");
    }

    return true;
}