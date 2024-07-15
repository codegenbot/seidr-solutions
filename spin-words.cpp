string spinWords(string str) {
    string result = "";
    int wordLength;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            inWord = false;
        } else {
            inWord = true;
            result += c;
        }

        if (!inWord && !result.empty()) {
            wordLength = result.length();
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result = result[i] + (inWord ? " " : "") + result;
            } else
                result = result + (inWord ? " " : "");
            result.clear();
        }
    }

    if (!result.empty()) {
        wordLength = result.length();
        if (wordLength >= 5) {
            for (int i = wordLength - 1; i >= 0; --i)
                result = result[i] + (inWord ? " " : "") + result;
        } else
            result = result + (inWord ? " " : "");
    }

    return result;
}