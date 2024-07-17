string spinWords(string wordInput) {
    string result = "";
    int i = 0;
    while (i < wordInput.length()) {
        if (wordInput[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i;
            while (j < wordInput.length() && wordInput[j] != ' ') {
                j++;
            }
            string word = wordInput.substr(i, j - i);
            if (word.length() >= 5) {
                std::string revWord = "";
                for (int k = word.length() - 1; k >= 0; k--) {
                    revWord += word[k];
                }
                result += revWord + " ";
            } else {
                result += word + " ";
            }
            i = j;
        }
    }
    return result;
}