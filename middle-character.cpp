int main() {
    string input;
    cin >> input;
    int n = input.length();
    if (n % 2 == 0) {
        cout << input.substr(n/2 - 1, 2);
    } else {
        cout << input[n/2];
    }
    return 0;
}