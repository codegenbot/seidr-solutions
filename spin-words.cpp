string spinWords(string str) {
    string result = "";
    int i = 0;
    bool reverse = false;

    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = 0;
            while (i < str.length() && str[i] != ' ') {
                i++;
                j++;
            }
            if (j >= 5) reverse = !reverse;

            string word = str.substr(i - j, j);
            if (reverse) {
                string revWord = "";
                for (int k = j - 1; k >= 0; k--) {
                    revWord += word[k];
                }
                result += revWord + " ";
                reverse = false;
            } else {
                result += word + " ";
            }
        }
    }
    return result.substr(0, result.length() - 1);
}