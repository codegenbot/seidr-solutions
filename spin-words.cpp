std::string spinWords(std::string str) {
    std::string result = "";
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        result += word.size() >= 5 ? std::string(word.rbegin(), word.rend()) : word + " ";
    }
    return result.substr(0, result.size() - 1); 
}