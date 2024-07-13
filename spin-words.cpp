int main() {
    string sentence;
    getline(cin, sentence);
    
    string word;
    string result = "";
    
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }
    
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    
    cout << result << endl;
    
    return 0;
}