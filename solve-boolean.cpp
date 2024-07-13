int main() {
    string expression;
    cin >> expression;

    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'f') {
            result = false;
        } else if (expression[i] == '&') {
            i++;
            if (expression[i] == 'f') {
                result = false;
            }
        }
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}