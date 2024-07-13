bool evaluateBooleanExpression(string expr) {
    if(expr == "t") return true;
    if(expr == "f") return false;
    
    bool result;
    stack<char> operators;
    stack<bool> operands;

    for(char c : expr) {
        if(c == 't') operands.push(true);
        else if(c == 'f') operands.push(false);
        else if(c == '&' || c == '|') operators.push(c);
        
        while(operators.size() > 0 && operands.size() >= 2) {
            char op = operators.top();
            operators.pop();
            bool op2 = operands.top();
            operands.pop();
            bool op1 = operands.top();
            operands.pop();
            
            if(op == '&') operands.push(op1 && op2);
            else if(op == '|') operands.push(op1 || op2);
        }
    }
    
    return operands.top();
}

int main() {
    string expr;
    cin >> expr;
    
    bool result = evaluateBooleanExpression(expr);
    
    if(result) cout << "True" << endl;
    else cout << "False" << endl;
    
    return 0;
}