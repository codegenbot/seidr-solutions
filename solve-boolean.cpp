bool solveBoolean(string booleanExpression) {
    stack<char> operatorStack;
    for (char c : booleanExpression) {
        if (c == '&' || c == '|') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                if (operatorStack.top() == '&') {
                    operatorStack.pop();
                    cout << "True" << endl;
                    return true;
                } else if (operatorStack.top() == '|') {
                    operatorStack.pop();
                    cout << "False" << endl;
                    return false;
                }
            }
            operatorStack.push(c);
        } else if (c == '(') {
            operatorStack.push(c);
        } else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                if (operatorStack.top() == '&') {
                    operatorStack.pop();
                    cout << "True" << endl;
                    return true;
                } else if (operatorStack.top() == '|') {
                    operatorStack.pop();
                    cout << "False" << endl;
                    return false;
                }
            }
            operatorStack.pop();
        }
    }
    while (!operatorStack.empty()) {
        if (operatorStack.top() == '&') {
            operatorStack.pop();
            cout << "True" << endl;
            return true;
        } else if (operatorStack.top() == '|') {
            operatorStack.pop();
            cout << "False" << endl;
            return false;
        }
    }
    return false;
}