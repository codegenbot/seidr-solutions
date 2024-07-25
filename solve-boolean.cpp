bool solveBoolean(string expression) {
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
                valStack.push((op1[0] == 'T' && op2[0] == 'T') ? "True" : "False");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string op2 = valStack.top();
                valStack.pop();
                string op1 = valStack.top();
                valStack.pop();
                valStack.push((op1[0] == 'T' && op2[0] == 'T') ? "True" : (op1[0] == 'F' || op2[0] == 'F') ? "False" : "True");
            }
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string temp = "";
            temp += expression[i];
            valStack.push(temp);
        }
    }

    return (valStack.top()[0] == 'T');
}