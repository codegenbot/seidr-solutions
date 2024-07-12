string middleCharacter(string s) {
    int n = s.size();
    if (n % 2 == 1) {
        return string(1, s[n / 2]);
    } else {
        return string(1, s[n / 2 - 1]) + string(1, s[n / 2]);
    }
}

int main() {
    string s;
    cin >> s;
    cout << middleCharacter(s) << endl;
    return 0;
}