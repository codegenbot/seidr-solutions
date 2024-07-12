int solve_boolean(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    bool result;
    if (expression.find('&') != string::npos) {
        int pos = expression.find('&');
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);
        result = solve_boolean(left) && solve_boolean(right);
    } else if (expression.find('|') != string::npos) {
        int pos = expression.find('|');
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);
        result = solve_boolean(left) || solve_boolean(right);
    }
    
    return result;
}

int main() {
    string expression;
    cin >> expression;
    
    bool result = solve_boolean(expression);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}