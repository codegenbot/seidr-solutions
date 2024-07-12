int main() {
    string sentence;
    getline(cin, sentence);
    
    string word;
    for (size_t i = 0; i < sentence.size(); ++i) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << " ";
            word.clear();
        }
    }
    
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    cout << word << endl;
    
    return 0;
}