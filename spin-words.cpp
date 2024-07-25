std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                char temp[word.length()];
                int j = word.length();
                for(int i=0; i<word.length(); i++) {
                    temp[i] = word[j-1];
                    j--;
                }
                temp[word.length()] = '\0';
                result += temp;
                result += ' ';
            } else
                result += word + ' ';
            word = "";
        } else
            word += c;
    }
    
    if (word.length() >= 5) {
        char temp[word.length()];
        int j = word.length();
        for(int i=0; i<word.length(); i++) {
            temp[i] = word[j-1];
            j--;
        }
        temp[word.length()] = '\0';
        result += temp;
    } else
        result += word;
    
    return result;
}