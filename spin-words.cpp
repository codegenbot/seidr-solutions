string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i;
            while (j < str.length() && str[j] != ' ') {
                j++;
            }
            string wordStr = str.substr(i, j - i);
            stringstream ss(wordStr);
            string word;
            ss >> word;
            if (word.length() >= 5) {
                string revWord = "";
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