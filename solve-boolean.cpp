int solve_boolean(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool operand1 = solve_boolean(expression.substr(0, 1));
        bool operand2 = solve_boolean(expression.substr(2));
        if (expression[1] == '&') {
            return operand1 && operand2;
        } else {
            return operand1 || operand2;
        }
    }
}

int main() {
    string input;
    cin >> input;
    if (solve_boolean(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}