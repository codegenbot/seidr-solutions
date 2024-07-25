bool solveBoolean(string expression) {
    stack<char> ops;
    bool result = false;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 't' || expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            // do nothing
        } else if (expression[i] == '|') {
            while (!ops.empty() && ops.top() != '&') {
                if (ops.top() == 'T' || ops.top() == 't') result = true; else break;
                ops.pop();
            }
            if (ops.empty()) ops.push('|');
        } else if (expression[i] == '&') {
            ops.push('&');
        }
    }

    while (!ops.empty()) {
        if (ops.top() == '|') {
            if (result) result = true; else break;
            ops.pop();
        } else {
            ops.pop();
        }
    }

    return result;
}