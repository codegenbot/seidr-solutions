string spinWords(string str) {
    string result = ""; 
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            int wordLength = i - result.length() - 1;
            if (wordLength >= 5) {
                string reversedWord = "";
                for (int j = wordLength - 1; j >= 0; j--)
                    reversedWord += str[i-1-j];
                result += reversedWord + " ";
            } else
                result += str.substr(i-1-wordLength, wordLength+1) + " ";
        }
    }
    return result;
}