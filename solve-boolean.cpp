string solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string op2 = valStack.top();
                valStack.pop();
                string op1 = valStack.top();
                valStack.pop();
                valStack.push((op1 == "T" && op2 == "T") ? "T" : "F");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string op2 = valStack.top();
                valStack.pop();
                string op1 = valStack.top();
                valStack.pop();
                valStack.push((op1 == "T" || op2 == "T") ? "T" : "F");
            }
            opStack.push('|');
        } else if (expression[i] == 't' || expression[i] == 'T') {
            valStack.push("T");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            valStack.push("F");
        }
    }

    return valStack.top();
}