std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string temp = "";
            for (int j = words[i].length() - 1; j >= 0; --j) {
                temp += words[i][j];
            }
            words[i] = temp;
        }
    }
    return join(words, ' ');
}