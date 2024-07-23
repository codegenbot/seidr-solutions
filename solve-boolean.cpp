#include <iostream>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> std::operators;
    string operand = "";
    int i = 0; 

    for (i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!std::operators.empty() && std::operators.top() == '|') {
                std::operators.pop();
            }
            if (!operand.empty()) {
                return operand == "True";
            }
        } else if (expression[i] == '|') {
            while (!std::operators.empty()) std::operators.pop();
            if (!operand.empty()) {
                return operand == "True";
            }
        } else if (expression[i] == 't' || expression[i] == 'f') {
            if (!std::operators.empty() && ((expression[i] == 't' && std::operators.top() == '|') ||
                                            (expression[i] == 'f' && std::operators.top() == '&'))) {
                while (!std::operators.empty()) std::operators.pop();
            }
            operand += (expression[i] == 't'? "T" : "F");
        } else if (expression[i] == '(') {
            std::operators.push(expression[i]);
        } else if (expression[i] == ')') {
            while (std::operators.top() != '(') {
                if (expression[i] == '|') {
                    while (!std::operators.empty() && std::operators.top() == '|') {
                        std::operators.pop();
                    }
                    return operand == "T";
                } else if (expression[i] == '&') {
                    while (!std::operators.empty()) std::operators.pop();
                    return operand == "T";
                }

                std::operators.pop();
            }
            std::operators.pop();
        }
    }

    while (!std::operators.empty()) {
        if (expression[i] == '|') {
            while (!std::operators.empty() && std::operators.top() == '|') {
                std::operators.pop();
            }
            return operand == "T";
        } else if (expression[i] == '&') {
            while (!std::operators.empty()) std::operators.pop();
            return operand == "T";
        }

        std::operators.pop();
    }

    return operand == "True";
}

int main() {
    string expression;
    cout << "Enter Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}