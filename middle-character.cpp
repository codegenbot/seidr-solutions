string middle_character(string s) {
    int n = s.size();
    if (n % 2 == 0) {
        return s.substr(n/2 - 1, 2);
    } else {
        return string(1, s[n/2]);
    }
}

int main() {
    string input;
    cin >> input;
    cout << middle_character(input) << endl;
    return 0;
}