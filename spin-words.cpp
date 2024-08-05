std::string spinWords(std::string str) {
    std::string result = str;
    int wordStart = 0;
    for(int i=0; i<=str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            std::string word = str.substr(wordStart, i-wordStart);
            if(word.length() >= 5) {
                result = result.replace(result.find(word), word.length(), std::string(word.rbegin(), word.rend()));
            }
            wordStart = i+1;
        }
    }
    return result;
}