bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string temp1 = valStack.top();
                valStack.pop();
                string temp2 = valStack.top();
                valStack.pop();
                valStack.push(temp1 + " & (" + temp2 + ")");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty() && opStack.top() == '&') {
                opStack.pop();
                string temp1 = valStack.top();
                valStack.pop();
                string temp2 = valStack.top();
                valStack.pop();
                valStack.push(temp1 + " | (" + temp2 + ")");
            }
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            valStack.push(expression.substr(i, 1));
            i++;
        }
    }

    while (!opStack.empty()) {
        string temp1 = valStack.top();
        valStack.pop();
        string temp2 = valStack.top();
        valStack.pop();
        if (opStack.top() == '|') {
            valStack.push(temp1 + " | (" + temp2 + ")");
        } else {
            valStack.push(temp1 + " & (" + temp2 + ")");
        }
        opStack.pop();
    }

    return valStack.top() == "T";
}