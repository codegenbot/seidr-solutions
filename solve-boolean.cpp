bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        bool left = expression[0] == 't' ? true : false;
        bool right = expression[2] == 't' ? true : false;
        
        if (op == '&') {
            return left && right;
        } else if (op == '|') {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    
    bool result = evaluateBooleanExpression(expression);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}