int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;
    bool first = true;
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        if (first) {
            cout << word;
            first = false;
        } else {
            cout << " " << word;
        }
    }

    return 0;
}