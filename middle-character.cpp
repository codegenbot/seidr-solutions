int main() {
    string input;
    cin >> input;

    int length = input.length();
    if (length % 2 == 0) {
        cout << input.substr(length / 2 - 1, 2);
    } else {
        cout << input.substr(length / 2, 1);
    }

    return 0;
}