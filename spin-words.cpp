int main() {
    string input;
    getline(cin, input);
    
    string word;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] != ' ') {
            word += input[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << " ";
            word = "";
        }
    }
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    cout << word << endl;
    
    return 0;
}