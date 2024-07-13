int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        char op = input[1];
        if (op == '&') {
            if (input[0] == 't' && input[2] == 't') {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        } else if (op == '|') {
            if (input[0] == 't' || input[2] == 't') {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        }
    }

    return 0;
}