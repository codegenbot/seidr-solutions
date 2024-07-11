string spinWords(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
            continue;
        }
        int j = i;
        while (j < str.length() && str[j] != ' ') {
            j++;
        }
        string word = str.substr(i, j - i);
        if (word.length() >= 5) {
            for (int k = word.length() - 1; k >= 0; k--) {
                result += word[k];
            }
        } else {
            result += word;
        }
        i = j;
    }
    return result;
}