string spinWords(const string &str) {
    string result = "";
    string word = "";
    for (char c : str) {
        if (c == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}