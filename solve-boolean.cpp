int main() {
    string expression;
    cin >> expression;

    bool result = expression[0] == 't' ? true : false;
    for (int i = 1; i < expression.size(); i += 2) {
        if (expression[i] == '&') {
            result = result && (expression[i + 1] == 't');
        } else if (expression[i] == '|') {
            result = result || (expression[i + 1] == 't');
        }
    }

    cout << (result ? "True" : "False") << endl;

    return 0;
}