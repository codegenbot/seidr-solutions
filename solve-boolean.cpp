bool evaluateBooleanExpression(string expr) {
    if (expr == "t") return true;
    if (expr == "f") return false;
    
    bool left, right;
    char op;
    int idx = 0;
    
    while (idx < expr.size() && expr[idx] != '&' && expr[idx] != '|') {
        idx++;
    }
    
    left = evaluateBooleanExpression(expr.substr(0, idx));
    right = evaluateBooleanExpression(expr.substr(idx + 1));
    op = expr[idx];
    
    if (op == '&') {
        return left && right;
    } else {
        return left || right;
    }
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