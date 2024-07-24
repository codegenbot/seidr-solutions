bool evaluateBoolExpression(const string& s) {
    if (s == "t") {
        return true;
    } else if (s == "f") {
        return false;
    } else {
        char op = s.back();
        if (op == '|') {
            return s[0] == 't' || s[1] == 't';
        } else if (op == '&') {
            return s[0] == 't' && s[1] == 't';
        }
    }
    return false;
}

int main() {
    string expression;
    cin >> expression;
    if (evaluateBoolExpression(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}