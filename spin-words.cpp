string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i + 1; // start of word
            int len = 0;
            while (j < str.length() && str[j] != ' ') {
                j++;
                len++;
            }
            if (len >= 5) { 
                for (; len > 0; --len) {
                    result += str[--j];
                }
            } else {
                while (i < j) {
                    result += str[i++];
                }
            }
        }
    }
    return result;
}