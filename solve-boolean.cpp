int main() {
    string expression;
    cin >> expression;

    bool result = (expression[0] == 't' || expression[0] == 'T');

    for (int i = 1; i < expression.size(); i += 2) {
        if (expression[i] == '|') {
            result = result || (expression[i + 1] == 't' || expression[i + 1] == 'T');
        } else if (expression[i] == '&') {
            result = result && (expression[i + 1] == 't' || expression[i + 1] == 'T');
        }
    }

    cout << (result ? "True" : "False") << endl;

    return 0;
}