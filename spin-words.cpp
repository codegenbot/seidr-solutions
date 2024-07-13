int main() {
    string input;
    getline(cin, input);

    string word;
    bool first_word = true;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ' || i == input.size() - 1) {
            if (!first_word) {
                if (word.size() >= 5) {
                    reverse(word.begin(), word.end());
                }
                cout << word;
                if (i != input.size() - 1) {
                    cout << ' ';
                }
            } else {
                cout << word;
                first_word = false;
            }
            word.clear();
        } else {
            word += input[i];
        }
    }

    cout << endl;

    return 0;
}