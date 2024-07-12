int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else if (input == "f&f" || input == "t&f" || input == "f&t") {
        cout << "False" << endl;
    }

    return 0;
}