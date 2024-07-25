std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                char temp[word.length() + 1];
                int i = word.length();
                do {
                    temp[i--] = word[i];
                } while(i >= 0);
                temp[word.length()] = '\0';
                result += temp;
            } else
                result += word + ' ';
            word = "";
        } else
            word += c;
    }
    
    if (word.length() >= 5) {
        char temp[word.length() + 1];
        int i = word.length();
        do {
            temp[i--] = word[i];
        } while(i >= 0);
        temp[word.length()] = '\0';
        result += temp;
    } else
        result += word;
    
    return result;
}