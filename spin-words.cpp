int main() {
    string input;
    getline(cin, input);
    
    string word;
    bool first = true;
    for (char c : input) {
        if (c == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            if (!first) {
                cout << " ";
            }
            cout << word;
            word = "";
            first = false;
        } else {
            word += c;
        }
    }
    
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    if (!first) {
        cout << " ";
    }
    cout << word;
    
    return 0;
}