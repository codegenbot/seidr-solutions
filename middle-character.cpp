string middleCharacter(string s) {
    int n = s.length();
    if (n % 2 == 1) {
        return string(1, s[n/2]);
    } else {
        return s.substr(n/2 - 1, 2);
 }
}

int main() {
    string input;
    cin >> input;
    cout << middleCharacter(input) << endl;
    return 0;
}