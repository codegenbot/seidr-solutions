std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += reverseWord(word) + ' ';
            else
                result += word + ' ';
            word = "";
        } else
            word += c;
    }
    
    if (word.length() >= 5)
        result += reverseWord(word);
    else
        result += word;
    
    return result;
}

std::string reverseWord(std::string str) {
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; --i)
        reversed += str[i];
    return reversed;
}