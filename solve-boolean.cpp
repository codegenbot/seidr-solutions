bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!opStack.empty() && 
                   ((expression[i] == '&') ^ (opStack.top() == '&')) &&
                   ((expression[i] == '|') ^ (opStack.top() == '|'))) {
                valStack.push(std::to_string((bool)(valStack.top().compare("T") == 0)) + 
                               (opStack.top() == '&' ? "&&" : "||"));
                opStack.pop();
                valStack.pop();
            }
            opStack.push(expression[i]);
        } else if (expression[i] == 't' || expression[i] == 'f') {
            string temp = "";
            while (i < expression.length() && 
                   (expression[i] == 't' || expression[i] == 'f')) {
                temp += expression[i++];
            }
            valStack.push(temp);
        }
    }

    while (!opStack.empty()) {
        valStack.push(std::to_string((bool)(valStack.top().compare("T") == 0)) + 
                       (opStack.top() == '&' ? "&&" : "||"));
        opStack.pop();
        valStack.pop();
    }

    return valStack.top().compare("True") == 0;
}