string spinWords(string str) {
    string result = "";
    int prevSpace = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(prevSpace, i - prevSpace);
            if (word.length() >= 5) {
                result += std::string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            prevSpace = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}