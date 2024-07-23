#include <stack>
#include <string>

string solveBoolean(string booleanExpression) {
    stack<char> expressionStack;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!expressionStack.empty() && expressionStack.top() == '&') {
                expressionStack.pop();
            }
        } else if (booleanExpression[i] == '|') {
            while (!expressionStack.empty()) {
                expressionStack.pop();
            }
        } else {
            expressionStack.push(booleanExpression[i]);
        }
    }
    
    string result = "";
    while (!expressionStack.empty()) {
        result += expressionStack.top();
        expressionStack.pop();
    }
    
    if (result == "T&T") return "True";
    if (result == "F&F") return "False";
    if ((result == "F&T") || (result == "&TF")) return "False";
    if (result == "T") return "True";
    if (result == "F") return "False";
    
    if (result == "TT" && booleanExpression.length() > 2) return "Invalid Input";
    if ((result == "FT" || result == "TF")) return "False";
    return "Invalid Input";
}