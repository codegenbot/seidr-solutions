int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    bool first = true;
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << (first ? "" : " ") << word;
        first = false;
    }

    return 0;
}