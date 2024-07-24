int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        bool result;
        bool op1 = (input[0] == 't') ? true : false;
        bool op2 = (input[2] == 't') ? true : false;

        if (input[1] == '&') {
            result = op1 && op2;
        } else if (input[1] == '|') {
            result = op1 || op2;
        }

        if (result) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}