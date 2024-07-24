bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.size(); i++) {
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
            while (!opStack.empty()) {
                opStack.pop();
                string temp1 = valStack.top();
                valStack.pop();
                string temp2 = valStack.top();
                valStack.pop();
                valStack.push(temp1 + " | (" + temp2 + ")");
            }
            opStack.push('|');
        } else if (expression[i] == 't' || expression[i] == 'f') {
            string str;
            while (i < expression.size() && (expression[i] == 't' || expression[i] == 'f')) {
                str += expression[i++];
            }
            valStack.push(str);
        }
    }

    return (valStack.top() == "t");
}