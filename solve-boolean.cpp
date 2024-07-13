int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        bool operand1 = (input[0] == 't') ? true : false;
        bool operand2 = (input[2] == 't') ? true : false;
        bool result = false;

        if (input[1] == '&') {
            result = operand1 && operand2;
        } else if (input[1] == '|') {
            result = operand1 || operand2;
        }

        if (result) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}