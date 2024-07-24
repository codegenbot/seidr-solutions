bool solveBoolean(string booleanExp) {
    stack<char> stack;
    bool result = false;
    
    for (int i = 0; i < booleanExp.length(); i++) {
        if (booleanExp[i] == '&') {
            while (!stack.empty() && stack.top() == '&') {
                stack.pop();
            }
            if (!stack.empty() && stack.top() == '|') {
                result = false;
                stack.pop();
            } else if (stack.empty()) {
                result = true;
            } else if (stack.top() == 'F') {
                result = false;
                stack.pop();
            }
        } else if (booleanExp[i] != '&') {
            stack.push(boolStringToChar(booleanExp[i]));
        }
    }
    
    return result;
}

char boolStringToChar(char c) {
    if (c == 't' || c == 'T')
        return 'T';
    else if (c == 'f' || c == 'F')
        return 'F';
    else if (c == '|') 
        return '|';
    else if (c == '&') 
        return '&';
    
    return '0';
}