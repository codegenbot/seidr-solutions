bool solveBoolean(std::string expression) {
    stack<std::string> stack;
    bool lastOp = false;
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            result = !lastOp;
            stack.push(std::string(1, "&"));
        } else if (c == '|') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
                lastOp = true;
            }
            stack.push("|");
        } else {
            stack.push(c == 'T' ? "T" : "F");
            lastOp = false;
        }
    }

    return !result;
}