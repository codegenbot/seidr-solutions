std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            int wordLength = i - word.length();
            if (wordLength >= 5) {
                std::string reversedWord = "";
                for (int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    result += word;
    return result;
}