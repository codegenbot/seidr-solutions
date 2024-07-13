int main() {
    string input;
    getline(cin, input);
    
    string word;
    bool first = true;
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                if (!first) {
                    cout << " ";
                }
                reverse(word.begin(), word.end());
                cout << word;
                first = false;
            } else {
                if (!first) {
                    cout << " ";
                }
                cout << word;
                first = false;
            }
            word = "";
        } else {
            word += input[i];
        }
    }
    cout << "\n";
    
    return 0;
}