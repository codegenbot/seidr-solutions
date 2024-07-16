std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordLength = 0;
        } else {
            wordLength++;
        }

        if (inWord && wordLength >= 5) {
            std::string temp = "";
            for (int i = wordLength - 1; i >= 0; --i)
                temp += sentence[sentence.find(c) + i];
            result += temp;
        } else
            result += c;

    }

    return result;
}