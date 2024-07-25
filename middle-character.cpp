int main() {
    string s;
    cin >> s;
    int len = s.length();
    if (len % 2 == 0) {
        cout << s.substr(len/2 - 1, 2);
    } else {
        cout << s[len/2];
    }
    return 0;
}