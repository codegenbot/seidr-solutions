int main() {
    string input;
    getline(cin, input);
    
    string word;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ' || i == input.size() - 1) {
            if (word.size() >= 5) {
                for (int j = word.size() - 1; j >= 0; --j) {
                    cout << word[j];
                }
            } else {
                cout << word;
            }
            if (i != input.size() - 1) {
                cout << ' ';
            }
            word = "";
        } else {
            word += input[i];
        }
    }
    
    return 0;
}