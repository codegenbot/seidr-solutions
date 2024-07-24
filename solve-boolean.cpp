int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        char op = input[input.size() - 2];
        char left = input[0];
        char right = input[input.size() - 1];

        if ((left == 't' && right == 't' && op == '&') || (left == 'f' && right == 'f' && op == '|')) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}