int main() {
    string expression;
    cin >> expression;

    if (expression == "t") {
        cout << "True" << endl;
    } else if (expression == "f") {
        cout << "False" << endl;
    } else {
        bool result = true;
        for (int i = 0; i < expression.size(); ++i) {
            if (expression[i] == '&') {
                result = result && (expression[i - 1] == 't' && expression[i + 1] == 't');
            } else if (expression[i] == '|') {
                result = result || (expression[i - 1] == 't' || expression[i + 1] == 't');
            }
        }

        if (result) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}