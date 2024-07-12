int solve_boolean(string expression) {
    if (expression == "t") return 1;
    if (expression == "f") return 0;
    
    int result = 0;
    for (int i = 1; i < expression.size(); i += 2) {
        int left = solve_boolean(expression.substr(0, i));
        int right = solve_boolean(expression.substr(i + 1));
        
        if (expression[i] == '&') {
            result = left & right;
        } else if (expression[i] == '|') {
            result = left | right;
        }
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    
    int result = solve_boolean(input);
    
    cout << (result == 1 ? "True" : "False") << endl;
    
    return 0;
}