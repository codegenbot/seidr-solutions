Here is the solution:

string spinWords(string s) {
    string result = "";
    int wordLength;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            wordLength = 0;
            while (i < s.length() && s[i] != ' ') {
                i++;
                wordLength++;
            }
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += s[i - j];
                }
            } else {
                while (i < s.length() && s[i] != ' ') {
                    i++;
                    result += s[i - 1];
                }
            }
        }
    }
    return result;
}