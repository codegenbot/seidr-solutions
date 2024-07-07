std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";

    while (ss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    return result;