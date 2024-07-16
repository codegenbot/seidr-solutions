string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str.substr(i);
            i++;
        } else if (str.length() - i >= 5) {
            for (int j = 0; j < strlen(&str.substr(i)); j++) {
                result += str[i + j];
            }
            i += strlen(&str.substr(i)) + 1;
        } else {
            int k = 0;
            while (i < str.length() && str[i] != ' ') {
                result += str[i];
                i++;
                k++;
            }
            if (k > 0) {
                for (int j = k; j > 0; j--) {
                    result += str[i - 1];
                }
                i--;
            } else {
                result += str.substr(i);
                i++;
            }
        }
    }
    return result;
}