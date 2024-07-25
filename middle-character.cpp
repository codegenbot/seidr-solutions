int main() {
    string s;
    cin >> s;
    if (s.length() % 2 == 1) {
        cout << s[s.length() / 2];
    } else {
        cout << s.substr(s.length() / 2 - 1, 2);
    }
    return 0;
}