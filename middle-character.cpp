string middleCharacter(string s) {
    if (s.length() % 2 == 0) {
        return s.substr(s.length() / 2 - 1, 2);
    } else {
        return s.substr(s.length() / 2, 1);
    }
}

int main() {
    string str;
    getline(cin, str);
    cout << middleCharacter(str) << endl;
    return 0;
}