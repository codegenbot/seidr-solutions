int main() {
    string expr;
    cin >> expr;

    if (expr == "t") {
        cout << "True" << endl;
    } else if (expr == "f") {
        cout << "False" << endl;
    } else {
        char op = expr[1];
        bool operand1 = (expr[0] == 't') ? true : false;
        bool operand2 = (expr[2] == 't') ? true : false;

        if (op == '&') {
            cout << (operand1 && operand2 ? "True" : "False") << endl;
        } else if (op == '|') {
            cout << (operand1 || operand2 ? "True" : "False") << endl;
        }
    }

    return 0;
}