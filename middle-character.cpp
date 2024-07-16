string getMiddleCharacter(const string& s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    string input;
    getline(cin, input);
    cout << getMiddleCharacter(input) << endl;
    return 0;
}