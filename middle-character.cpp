int main() {
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 == 1) {
        cout << s[n/2];
    } else {
        cout << s.substr(n/2 - 1, 2);
    }
    return 0;
}