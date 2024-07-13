string spinWords(const string &str) {
    string result = "";
    string word = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + (i == str.length() ? "" : " ");
            word = "";
        } else {
            word += str[i];
        }
    }
    return result;
}