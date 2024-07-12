int main() {
    string input;
    getline(cin, input);

    string word;
    bool isFirstWord = true;
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << (isFirstWord ? "" : " ") << word;
            word = "";
            isFirstWord = false;
        } else {
            word += input[i];
        }
    }

    return 0;
}