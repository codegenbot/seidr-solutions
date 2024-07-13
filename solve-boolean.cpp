int main() {
    string input;
    cin >> input;

    if (input == "t")
        cout << "True" << endl;
    else if (input == "f")
        cout << "False" << endl;
    else if (input == "f&f")
        cout << "False" << endl;
    else if (input == "f&t")
        cout << "False" << endl;
    else if (input == "t&f")
        cout << "False" << endl;

    return 0;
}