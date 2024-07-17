bool solveBoolean(string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++) {
        if(expression[i] == 'T') continue;
        else if(expression[i] == 'F') return false;
        else if(expression[i] == '&') {
            if(result) result = evaluateBooleanExpression(expression.substr(i+1));
            else return false;
            i++;
        }
        else if(expression[i] == '|') {
            if(result) return true;
            else result = evaluateBooleanExpression(expression.substr(i+1));
            i++;
        }
    }
    return result;
}

bool evaluateBooleanExpression(string expression) {
    stack<char> operators;
    for(int i=0; i<expression.length(); i++) {
        if(expression[i] == 'T') return true;
        else if(expression[i] == 'F') return false;
        else if(expression[i] == '&') operators.push('&');
        else if(expression[i] == '|') operators.push('|');
    }
    
    while(!operators.empty()) {
        char operator = operators.top();
        operators.pop();
        bool operand2 = evaluateBooleanExpression(operators.top());
        operators.pop();
        bool operand1;
        if(operator == '&') operand1 = true;
        else operand1 = false;
        
        if(operator == '|') result = operand1 | operand2;
        else result = operand1 & operand2;
    }
    
    return result;
}