string spinWords(string str) {
    string result = "";
    int wordLength;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            inWord = false;
            if (!result.empty()) {
                wordLength = result.length();
                if (wordLength >= 5)
                    result = string(result.rbegin(), result.rend());
                else
                    result = result;
                result += " ";
            }
        } else {
            inWord = true;
            result += c;
        }

        if (!inWord && !result.empty()) {
            wordLength = result.length();
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result = string(1, result[i]) + result;
            } else
                result = result;
        }
    }

    if (!result.empty()) {
        wordLength = result.length();
        if (wordLength >= 5) {
            for (int i = wordLength - 1; i >= 0; --i)
                result = string(1, result[i]) + result;
        } else
            result = result;
    }

    return result;
}