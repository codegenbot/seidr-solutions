int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    bool firstWord = true;
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        if (!firstWord) {
            cout << " ";
        }
        cout << word;
        firstWord = false;
    }

    return 0;
}