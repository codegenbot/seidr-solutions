bool evaluateBooleanExpression(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    bool result = false;
    for (int i = 0; i < expression.size(); ++i) {
        if (expression[i] == '&') {
            result = result && evaluateBooleanExpression(expression.substr(i + 1));
        } else if (expression[i] == '|') {
            result = result || evaluateBooleanExpression(expression.substr(i + 1));
        }
    }
    
    return result;
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