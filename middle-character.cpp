string getMiddle(string s) {
    int n = s.length();
    if (n % 2 == 0) {
        return s.substr(n/2 - 1, 2);
    } else {
        return s.substr(n/2, 1);
    }
}
int main() {
    string s;
    cin >> s;
    cout << getMiddle(s) << endl;
    return 0;
}