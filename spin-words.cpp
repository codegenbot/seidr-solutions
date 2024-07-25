std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                word = std::string(word.rbegin(), word.rend());
            }
            result += word + ' ';
            word = "";
        } else
            word += c;
    }
    
    if (word.length() >= 5) {
        word = std::string(word.rbegin(), word.rend());
    }
    result += word;
    
    return result;
}