bool solveBoolean(std::string expression) {
    std::stack<std::string> stack;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            stack.push('&');
        } else if (expression[i] == '|') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
            }
        } else {
            stack.push(std::string(1, expression[i]));
        }
    }

    bool result = true;
    while (!stack.empty()) {
        std::string op = stack.top();
        stack.pop();
        if (op == "&") {
            result &= (stack.size() > 0 ? solveBoolean(stack.top()) : false);
            stack.pop();
        } else if (op == "|") {
            if (stack.size() > 1) {
                result |= (stack.top()[0] == 'T');
                stack.pop();
            }
        } else {
            result = stack.top()[0] == 'T';
            stack.pop();
        }
    }

    return !result;
}