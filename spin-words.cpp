int main() {
    string input;
    getline(cin, input);

    string word;
    bool firstWord = true;
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (!firstWord) {
                if (word.size() >= 5) {
                    reverse(word.begin(), word.end());
                }
                cout << word;
            } else {
                cout << word;
                firstWord = false;
            }
            if (i != input.size()) {
                cout << " ";
            }
            word = "";
        } else {
            word += input[i];
        }
    }

    return 0;
}