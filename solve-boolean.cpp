int solve_boolean(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = '|';
        int idx;
        if (expression.find('&') != string::npos) {
            op = '&';
        }
        for (int i = 0; i < expression.size(); ++i) {
            if (expression[i] == op) {
                idx = i;
                break;
            }
        }
        bool left = solve_boolean(expression.substr(0, idx));
        bool right = solve_boolean(expression.substr(idx + 1));
        if (op == '|') {
            return left || right;
        } else {
            return left && right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (solve_boolean(expression) ? "True" : "False") << endl;
    return 0;
}