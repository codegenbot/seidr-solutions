int main() {
    string expression;
    cin >> expression;

    if (expression == "t")
        cout << "True";
    else if (expression == "f")
        cout << "False";
    else {
        char op = expression[1];
        if (op == '&') {
            if (expression[0] == 't' && expression[2] == 't')
                cout << "True";
            else
                cout << "False";
        } else if (op == '|') {
            if (expression[0] == 't' || expression[2] == 't')
                cout << "True";
            else
                cout << "False";
        }
    }

    return 0;
}