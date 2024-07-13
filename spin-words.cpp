string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = i > str.length() ? str.length() : i;
            if (wordLength >= 5) {
                result.append(string(str.substr(i-1-wordLength, wordLength)) + " ");
            } else
                result.append(str.substr(result.length(), wordLength)).append(" ");
        }
    }
    return result.substr(0, result.length() - 1);
}