int main() {
    string input;
    getline(cin, input);
    
    string word;
    bool firstWord = true;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << (firstWord ? "" : " ") << word;
            word = "";
            firstWord = false;
        } else {
            word += input[i];
        }
    }
    
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    cout << (firstWord ? "" : " ") << word;
    
    return 0;
}