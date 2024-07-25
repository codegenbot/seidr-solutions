int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool first = true;
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << (first ? "" : " ") << word;
        first = false;
    }
    cout << endl;
    return 0;
}