#include <string>
using namespace std;

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
                valStack.push((operand1 == "T" && operand2 == "T") ? "T" : "F");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 == "T" || operand2 == "T") ? "T" : "F");
            }
            opStack.push('|');
        } else if (expression[i] == 't' || expression[i] == 'T') {
            valStack.push("T");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            valStack.push("F");
        }
    }

    return valStack.top() == "T";
}