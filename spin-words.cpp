string spinWords(const string &sentence) {
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
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
    return result;
}