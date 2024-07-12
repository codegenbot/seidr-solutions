int evaluateBoolean(string expression) {
    vector<char> stack;
    for (char c : expression) {
        if (c == '&') {
            if (stack.size() >= 2) {
                char operand1 = stack.back();
                stack.pop_back();
                char operand2 = stack.back();
                stack.pop_back();
                if ((operand1 == 'T' || operand1 == 'F') && (operand2 == 'T' || operand2 == 'F')) {
                    stack.push_back((operand1 == 'T' && operand2 == 'T') ? 'T' : 'F');
                }
            }
        } else if (c == '|') {
            if (stack.size() >= 2) {
                char operand1 = stack.back();
                stack.pop_back();
                char operand2 = stack.back();
                stack.pop_back();
                if ((operand1 == 'T' || operand1 == 'F') && (operand2 == 'T' || operand2 == 'F')) {
                    stack.push_back((operand1 == 'T' || operand2 == 'T') ? 'T' : 'F');
                }
            }
        }
    }
    return stack.back();
}