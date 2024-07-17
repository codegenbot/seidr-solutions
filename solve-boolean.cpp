bool solveBoolean(std::string expression) {
    stack<std::string> stack;
    bool lastOp = false;
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            while (!stack.empty() && stack.top() != "|") stack.pop();
            stack.push("&");
            lastOp = true;
        } else if (c == '|') {
            while (!stack.empty()) {
                if (stack.top() == "&") {
                    stack.pop();
                    lastOp = false;
                    break;
                }
                else if(stack.top() == "|") {
                    stack.pop();
                    lastOp = !lastOp;
                    break;
                }
            }
            stack.push("|");
        } else {
            stack.push(c == 'T' ? "T" : "F");
            lastOp = false;
        }
    }

    while (!stack.empty()) {
        if (stack.top() == "&") {
            stack.pop();
            lastOp = true;
        } 
        else if(stack.top() == "|") {
            stack.pop();
            lastOp = !lastOp;
        }
        else break;
    }

    return lastOp ? "T" : "F";
}