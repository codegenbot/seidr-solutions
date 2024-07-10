int main() {
    string input;
    getline(cin, input);
    string word = "";
    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word;
            if (i != input.length()) {
                cout << " ";
            }
            word = "";
        } else {
            word += input[i];
        }
    }
    return 0;
}