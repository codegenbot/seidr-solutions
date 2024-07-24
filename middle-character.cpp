int main() {
    string input;
    cin >> input;
    if (input.size() % 2 == 0) {
        int middle = input.size() / 2;
        cout << input.substr(middle - 1, 2) << endl;
    } else {
        int middle = input.size() / 2;
        cout << input.substr(middle, 1) << endl;
    }
    return 0;
}