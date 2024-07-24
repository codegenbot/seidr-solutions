int main() {
    string n;
    cin >> n;
    for (char c : n) {
        int digit = c - '0';
        cout << digit * digit;
    }
    return 0;
}