std::string spinWords(std::string str) {
    std::string result = "";
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}