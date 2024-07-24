int main() {
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 == 1) {
        cout << s[n/2] << endl;
    } else {
        cout << s.substr(n/2 - 1, 2) << endl;
    }
    return 0;
}