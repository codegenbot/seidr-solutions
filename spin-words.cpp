int main() {
    string input;
    getline(cin, input);
    
    string word;
    bool firstWord = true;
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            if (!firstWord) {
                cout << " ";
            }
            cout << word;
            word = "";
            firstWord = false;
        } else {
            word += input[i];
        }
    }
    
    return 0;
}