std::string spinWords(std::string str) {
    std::string result = "";
    bool reverseNext = false;
    
    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() - 1 || str[i + 1] == ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5) {
                reverseNext = true;
            } else {
                reverseNext = false;
            }
            
            if (reverseNext) {
                std::string revWord(word.rbegin(), word.rend());
                result += revWord + " ";
            } else {
                result += word + " ";
            }
        }
    }
    
    return result;