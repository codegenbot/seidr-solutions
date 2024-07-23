#include <stack>
#include <string>

std::string solveBoolean(std::string booleanExpression) {
    std::stack<char> expressionStack;
    
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
    
    std::string result = "";
    while (!expressionStack.empty()) {
        result += expressionStack.top();
        expressionStack.pop();
    }
    
    if (result == "TT") return "True";
    if (result == "FF") return "False";
    if (result == "FT" || result == "TF") return "False";
    if (result == "T") return "True";
    if (result == "F") return "False";
    
    return "Invalid Input";
}