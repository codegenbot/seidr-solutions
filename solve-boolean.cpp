int main() {
    string expression;
    cin >> expression;

    if (expression == "t") {
        cout << "True" << endl;
    } else if (expression == "f") {
        cout << "False" << endl;
    } else {
        bool result = true;
        for (int i = 0; i < expression.size(); i += 2) {
            if (expression[i] == 'f' || expression[i + 1] == 'f') {
                result = false;
                break;
            }
        }
        cout << (result ? "True" : "False") << endl;
    }

    return 0;
}