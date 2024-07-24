int main() {
    string input;
    getline(cin, input);
    
    string word;
    for (int i = 0; i <= input.size(); i++) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word;
            if (i < input.size()) {
                cout << " ";
            }
            word = "";
        } else {
            word += input[i];
        }
    }
    
    return 0;
}