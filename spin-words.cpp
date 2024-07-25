std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::string temp = word;
                for (int i = word.length() - 1; i >= 0; --i)
                    result += temp[i];
                result += ' ';
            } else
                result += word + ' ';
            word = "";
        } else
            word += c;
    }
    
    if (word.length() >= 5) {
        std::string temp = word;
        for (int i = word.length() - 1; i >= 0; --i)
            result += temp[i];
    } else
        result += word;
    
    return result;
}