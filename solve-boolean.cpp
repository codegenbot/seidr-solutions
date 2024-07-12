int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        bool result = true;
        for (int i = 0; i < input.size(); i += 2) {
            if (input[i+1] == '&') {
                if (input[i] == 'f' || input[i+2] == 'f') {
                    result = false;
                    break;
                }
            } else if (input[i+1] == '|') {
                if (input[i] == 't' || input[i+2] == 't') {
                    result = true;
                    break;
                }
            }
        }
        cout << (result ? "True" : "False") << endl;
    }

    return 0;
}