string getMiddleCharacters(const string& s) {
    int n = s.length();
    if (n % 2 == 0) {
        return s.substr(n/2 - 1, 2);
    } else {
        return s.substr(n/2, 1);
    }
}

int main() {
    string input;
    cin >> input;
    cout << getMiddleCharacters(input) << endl;
    return 0;
}