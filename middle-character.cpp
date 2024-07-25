int main() {
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 == 0) {
        cout << s.substr(n/2 - 1, 2);
    } else {
        cout << s.substr(n/2, 1);
    }
    return 0;
}