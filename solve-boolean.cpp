bool evaluateBoolExpr(string expr) {
    stack<char> operands;
    stack<char> operators;
    
    for(char c : expr) {
        if(c == 't' || c == 'f') {
            operands.push(c);
        } else if(c == '&' || c == '|') {
            operators.push(c);
        }
    }
    
    while(!operators.empty()) {
        char op = operators.top();
        operators.pop();
        
        char op2 = operands.top();
        operands.pop();
        char op1 = operands.top();
        operands.pop();
        
        if(op == '&') {
            if(op1 == 't' && op2 == 't') {
                operands.push('t');
            } else {
                operands.push('f');
            }
        } else {
            if(op1 == 't' || op2 == 't') {
                operands.push('t');
            } else {
                operands.push('f');
            }
        }
    }
    
    return operands.top() == 't';
}

int main() {
    string expr;
    cin >> expr;
    
    if(evaluateBoolExpr(expr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}