int main() {
    string input;
    cin >> input;

    if (input == "T") {
        cout << "True" << endl;
    } else if (input == "F") {
        cout << "False" << endl;
    } else if (input == "F&F" || input == "F|F") {
        cout << "False" << endl;
    } else {
        cout << "True" << endl;
    }

    return 0;
}