bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBoolean(expression.substr(0, 1));
        bool right = evaluateBoolean(expression.substr(2));
        if (expression[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string input;
    cin >> input;
    bool result = evaluateBoolean(input);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}