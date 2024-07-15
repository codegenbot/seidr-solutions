string spinWords(string str) {
    string result = "";
    int wordLength;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            inWord = false;
            result += c;
        } else {
            inWord = true;
            result += c;
        }

        if (!inWord && !result.empty()) {
            wordLength = result.length();
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result = result.substr(0, i) + result.substr(i + 1) + " ";
            } else
                result += " ";
        }
    }

    if (!result.empty()) {
        wordLength = result.length();
        if (wordLength >= 5) {
            for (int i = wordLength - 1; i >= 0; --i)
                result = result.substr(0, i) + result.substr(i + 1) + " ";
        }
    }

    return result;
}