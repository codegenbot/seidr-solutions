bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    bool result;
    if (expression.find('&') != string::npos) {
        size_t pos = expression.find('&');
        result = evaluateBooleanExpression(expression.substr(0, pos)) && evaluateBooleanExpression(expression.substr(pos + 1));
    } else if (expression.find('|') != string::npos) {
        size_t pos = expression.find('|');
        result = evaluateBooleanExpression(expression.substr(0, pos)) || evaluateBooleanExpression(expression.substr(pos + 1));
    }
    
    return result;
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