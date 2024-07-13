bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        bool operand1 = expression[0] == 't' ? true : false;
        bool operand2 = expression[2] == 't' ? true : false;
        
        if (op == '&') {
            return operand1 && operand2;
        } else if (op == '|') {
            return operand1 || operand2;
        }
    }
    
    return false;
}

int main() {
    string expression;
    cin >> expression;
    
    if (evaluateBooleanExpression(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}