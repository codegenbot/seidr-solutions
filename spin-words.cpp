int main() {
    string input;
    getline(cin, input);

    string word;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ' || i == input.length() - 1) {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << (i == input.length() - 1 ? "" : " ");
            word.clear();
        } else {
            word += input[i];
        }
    }

    return 0;
}