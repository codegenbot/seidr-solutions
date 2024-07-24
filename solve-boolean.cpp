bool solveBoolean(string booleanExpression) {
    stack<char> expressionStack;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        char currentChar = booleanExpression[i];
        
        if (currentChar == '&' || currentChar == '|') {
            while (!expressionStack.empty() && expressionStack.top() != '(') {
                int prevOp = expressionStack.top();
                expressionStack.pop();
                
                if (prevOp == '&') {
                    currentChar = '&';
                } else {
                    currentChar = '|';
                }
            }
            
            if (!expressionStack.empty() && expressionStack.top() == '(') {
                expressionStack.pop(); // remove the left parenthesis
            }
        } else if (currentChar == '(') {
            expressionStack.push('(');
        } else if (currentChar == ')') {
            while (!expressionStack.empty() && expressionStack.top() != '(') {
                int prevOp = expressionStack.top();
                expressionStack.pop();
                
                if (prevOp == '&') {
                    currentChar = '&';
                } else {
                    currentChar = '|';
                }
            }
            
            if (!expressionStack.empty() && expressionStack.top() == '(') {
                expressionStack.pop(); // remove the left parenthesis
            }
        } else {
            expressionStack.push(currentChar);
        }
    }
    
    while (!expressionStack.empty()) {
        int prevOp = expressionStack.top();
        expressionStack.pop();
        
        if (prevOp == '&') {
            currentChar = '&';
        } else {
            currentChar = '|';
        }
    }
    
    return currentChar == 't' ? true : false;
}