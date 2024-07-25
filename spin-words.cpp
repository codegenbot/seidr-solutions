int main() {
    string input;
    getline(cin, input);
    
    string word;
    bool first_word = true;
    
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << (first_word ? "" : " ") << word;
            word = "";
            first_word = false;
        } else {
            word += input[i];
        }
    }
    
    cout << endl;
    
    return 0;
}