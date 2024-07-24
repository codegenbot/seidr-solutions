#include <string>

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 == "True" && operand2 == "True") ? "True" : "False");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 == "True" || operand2 == "True") ? "True" : "False");
            }
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valStack.push("True");
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valStack.push("False");
        }
    }

    return valStack.top() == "True";
}