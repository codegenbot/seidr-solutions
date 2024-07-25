int main() {
    string s;
    cin >> s;
    int n = s.length();
    if (n % 2 == 0) {
        cout << s.substr(n/2 - 1, 2) << endl;
    } else {
        cout << s.substr(n/2, 1) << endl;
    }
    return 0;
}