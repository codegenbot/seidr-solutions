```cpp
bool solveBoolean(std::string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
            }
            if (!operatorStack.empty()) {
                operatorStack.push('&');
            }
        } else if (expression[i] == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
            operatorStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            if (i < expression.length() - 1 && (expression[i + 1] == '&' || expression[i + 1] == '|')) {
                i++;
                continue;
            }
            return expression[i] == 'T';
        }
    }
    while (!operatorStack.empty()) {
        operatorStack.pop();
    }
    return false;
}