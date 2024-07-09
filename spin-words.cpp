std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string reversed;
    std::string unmodified;

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
            reversed += words[i] + " ";
        } else {
            unmodified += words[i] + " ";
        }
    }

    return join({reversed.substr(0, reversed.size()-1), unmodified.substr(0, unmodified.size()-1)}, ' ');
}