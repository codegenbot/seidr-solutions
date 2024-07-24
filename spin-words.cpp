std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    // Don't forget the last word
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    
    result += word;
    
    return result;