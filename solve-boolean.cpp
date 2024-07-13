bool evaluateBoolean(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        if (op == '&') {
            return (expression[0] == 't' && expression[2] == 't');
        } else { // op == '|'
            return (expression[0] == 't' || expression[2] == 't');
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    
    if (evaluateBoolean(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}