string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 == 1) {
        return s.substr(len / 2, 1);
    } else {
        return s.substr(len / 2 - 1, 2);
    }
}

int main() {
    string s;
    getline(cin, s);
    cout << middleCharacter(s) << endl;
    return 0;
}