std::string spinWords(const std::string& str) {
    std::string result;  
    for (const auto& word : str + " ") {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    return result;