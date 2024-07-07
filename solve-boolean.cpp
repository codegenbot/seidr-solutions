bool evaluate(const string &expression) {
    stack<char> opStack;
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            opStack.push('|');
        } else if (expression[i] == '&') {
            opStack.push('&');
        } else if (expression[i] == '^') {
            opStack.push('^');
        } else if (opStack.empty()) {
            result = true;
        } else {
            char operator = opStack.top();
            switch (operator) {
                case '|':
                    result |= expression.at(i);
                    break;
                case '&':
                    result &= expression.at(i);
                    break;
                case '^':
                    result ^= expression.at(i);
                    break;
            }
        }
    }
    return result && expression != "false";
}