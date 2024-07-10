#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string b = valStack.top();
                valStack.pop();
                string a = valStack.top();
                valStack.pop();
                valStack.push((a == "T" && b == "T") ? "F" : "T");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string b = valStack.top();
                valStack.pop();
                string a = valStack.top();
                valStack.pop();
                valStack.push((a == "T" && b == "F") ? "T" : (a == "F" && b == "T") ? "T" : "F");
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