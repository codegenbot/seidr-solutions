string getMiddleCharacter(string s) {
    int n = s.size();
    if (n % 2 == 1) {
        return string(1, s[n / 2]);
    } else {
        return s.substr(n / 2 - 1, 2);
    }
}

int main() {
    string s;
    cin >> s;
    cout << getMiddleCharacter(s) << endl;
    return 0;
}