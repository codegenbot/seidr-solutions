bool solveBoolean(string expression) {
    stack<char> operation;
    bool value = false;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T')
            value = true;
        else if (expression[i] == 'F')
            value = false;
        else if (expression[i] == '|') {
            while (!operation.empty() && operation.top() != '&') {
                if (operation.top() == '|')
                    return true;
                operation.pop();
            }
            if (operation.empty())
                return value;
            operation.push(expression[i]);
        } 
        else if (expression[i] == '&') {
            operation.push(expression[i]);
        }
    }

    while (!operation.empty()) {
        if (operation.top() == '|')
            return true;
        operation.pop();
    }

    return value;
}