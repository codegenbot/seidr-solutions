int main() {
    string input;
    cin >> input;
    int len = input.length();
    if (len % 2 == 0) {
        cout << input.substr(len / 2 - 1, 2) << endl;
    } else {
        cout << input[len / 2] << endl;
    }
    return 0;
}