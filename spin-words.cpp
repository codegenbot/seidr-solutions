int main() {
    string input;
    getline(cin, input);
    string word = "";
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << " ";
            word = "";
        } else {
            word += input[i];
        }
    }
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    cout << word << endl;
    return 0;
}