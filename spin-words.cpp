int main() {
    string input;
    getline(cin, input);
    
    string word;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ' || i == input.length() - 1) {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << " ";
            word = "";
        } else {
            word += input[i];
        }
    }
    
    cout << endl;
    
    return 0;
}