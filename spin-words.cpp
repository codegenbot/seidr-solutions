string spinWords(const string &sentence) {
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}