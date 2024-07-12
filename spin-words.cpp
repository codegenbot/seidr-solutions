string spinWords(string str) {
    vector<string> words;
    string word = "";
    
    for (char c : str) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    words.back() = word;  // Add the last word
    
    string result = "";
    for (string w : words) {
        if (w.length() >= 5) {
            reverse(w.begin(), w.end());
        }
        result += w + " ";
    }
    
    return result;
}