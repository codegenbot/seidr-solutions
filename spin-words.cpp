std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += sentence[i];
        }
    }
    
    result += word;
    
    std::string newSentence = "";
    int len;
    
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            len = i;
        } else if (i > len && result[i - 1] != ' ') {
            len = i;
        }
        
        if (len >= 5) {
            std::string reversedWord = "";
            for (int j = len; j >= 0; j--) {
                reversedWord += result[i-j];
            }
            newSentence += reversedWord + " ";
            i += len;
        } else {
            newSentence += result.substr(0, len + 1);
        }
    }
    
    return newSentence;
}