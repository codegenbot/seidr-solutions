int main() {
    string input;
    cin >> input;

    bool result = true;
    if (input == "f") {
        result = false;
    } else if (input == "f|f" || input == "f&t" || input == "t&f") {
        result = false;
    }

    cout << (result ? "True" : "False") << endl;

    return 0;
}