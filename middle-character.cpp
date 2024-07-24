string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return string(1, s[len / 2]);
    }
}

int main() {
    string input;
    getline(cin, input);
    cout << middleCharacter(input) << endl;
    return 0;
}