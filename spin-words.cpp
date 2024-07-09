std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
        result += words[i] + " ";
    }

    return result.substr(0, result.size() - 1);
}