int main() {
    string input;
    getline(cin, input);

    string word;
    bool firstWord = true;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ' || i == input.size() - 1) {
            if (i == input.size() - 1) {
                word += input[i];
            }
            if (word.size() >= 5) {
                for (int j = word.size() - 1; j >= 0; --j) {
                    cout << word[j];
                }
            } else {
                cout << word;
            }
            if (i != input.size() - 1) {
                cout << ' ';
            }
            word = "";
        } else {
            word += input[i];
        }
    }

    return 0;
}