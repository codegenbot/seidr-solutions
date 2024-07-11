string spinWords(const string &sentence) {
    string result = "";
    string word = "";
    for (char ch : sentence) {
        if (ch == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += ch;
        }
    }
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}