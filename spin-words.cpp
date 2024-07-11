int main() {
    string input;
    getline(cin, input);
    
    vector<string> words;
    string word = "";
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += input[i];
        }
    }
    words.push_back(word);
    
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].size() >= 5) {
            reverse(words[i].begin(), words[i].end());
        }
        cout << words[i];
        if (i < words.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}