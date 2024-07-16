#include <string>

string solveBoolean(string booleanExp) {
    stack<char> operatorStack;
    string result = "T";
    
    for (char c : booleanExp) {
        if (c == 'T' || c == 'F') {
            result = (result == "T") ? "T" : "F";
        } else if (c == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
            }
            operatorStack.push(c);
        } else if (c == '|') {
            while (!operatorStack.empty()) {
                if (operatorStack.top() == '&') {
                    operatorStack.pop();
                    break;
                }
                result = "T";
            }
            operatorStack.push(c);
        }
    }
    
    return result;
}