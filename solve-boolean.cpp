bool evaluateBooleanExpression(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        char op = expr[1];
        bool operand1 = (expr[0] == 't') ? true : false;
        bool operand2 = (expr[2] == 't') ? true : false;
        
        if (op == '&') {
            return operand1 && operand2;
        } else if (op == '|') {
            return operand1 || operand2;
        }
    }
    return false;
}

int main() {
    string expr;
    cin >> expr;
    
    bool result = evaluateBooleanExpression(expr);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}