int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        bool result;
        if (input == "f&f" || input == "f&t" || input == "t&f") {
            result = false;
        } else {
            result = true;
        }
        cout << (result ? "True" : "False") << endl;
    }

    return 0;
}