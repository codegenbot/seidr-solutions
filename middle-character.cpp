string middleCharacter(string s) {
    if (s.length() % 2 == 0) {
        return s.substr(s.length() / 2 - 1, 2);
    } else {
        return s.substr(s.length() / 2, 1);
    }
}
int main() {
    string s;
    cin >> s;
    cout << middleCharacter(s) << endl;
    return 0;
}