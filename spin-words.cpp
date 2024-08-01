std::string spinWords(std::string str) {
    std::string result = "";
    bool isWordLongEnough = false;
    for (char c : str) {
        if (c == ' ') {
            if (isWordLongEnough) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
                isWordLongEnough = false;
            } else
                result += c;
            wordLength = 0;
        } else {
            wordLength++;
            if (wordLength >= 5) {
                isWordLongEnough = true;
            }
            result += c;
        }
    }
    if (isWordLongEnough) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
    }
    return result;
}