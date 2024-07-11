int main() {
    string input;
    getline(cin, input);
    
    string word;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ' || i == input.size() - 1) {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << (i == input.size() - 1 ? "" : " ");
            word = "";
        } else {
            word += input[i];
        }
    }
    
    return 0;
}