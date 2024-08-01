#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> opstack;
    stack<string> valstack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!opstack.empty() && opstack.top() != '(') {
                char c = opstack.top();
                opstack.pop();
                string operand1 = valstack.top();
                valstack.pop();
                string operand2;
                if (!opstack.empty()) {
                    operand2 = valstack.top();
                    valstack.pop();
                } else {
                    operand2 = "T";
                }
                if (c == '&') {
                    valstack.push((operand1 == "T" && operand2 == "T") ? "T" : "F");
                } else {
                    valstack.push((operand1 == "T" || operand2 == "T") ? "T" : "F");
                }
            }
            opstack.push(expression[i]);
        } else if (expression[i] == '(') {
            opstack.push('(');
        } else if (expression[i] == ')') {
            while (!opstack.empty() && opstack.top() != '(') {
                char c = opstack.top();
                opstack.pop();
                string operand1 = valstack.top();
                valstack.pop();
                string operand2;
                if (!opstack.empty()) {
                    operand2 = valstack.top();
                    valstack.pop();
                } else {
                    operand2 = "T";
                }
                if (c == '&') {
                    valstack.push((operand1 == "T" && operand2 == "T") ? "T" : "F");
                } else {
                    valstack.push((operand1 == "T" || operand2 == "T") ? "T" : "F");
                }
            }
            opstack.pop();
        } else {
            string temp = "";
            while (i < expression.length() && expression[i] != '&' && expression[i] != '|') {
                temp += expression[i];
                i++;
            }
            valstack.push(temp);
            i--;
        }
    }

    if (!opstack.empty()) {
        char c = opstack.top();
        opstack.pop();
        string operand1 = valstack.top();
        valstack.pop();
        string operand2;
        if (!opstack.empty()) {
            operand2 = valstack.top();
            valstack.pop();
        } else {
            operand2 = "T";
        }
        if (c == '&') {
            valstack.push((operand1 == "T" && operand2 == "T") ? "T" : "F");
        } else {
            valstack.push((operand1 == "T" || operand2 == "T") ? "T" : "F");
        }
    }

    return (valstack.top() == "T");
}