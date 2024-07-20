std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            word = std::string(word.rbegin(), word.rend());
        }
        result += word + " ";
    }

    return result.substr(0, result.size() - 1);