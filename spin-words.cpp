Here's the solution:

string spinWords(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str[i];
        } else if (i + 1 >= str.length() || tolower(str[i]) > tolower(str[i + 1])) {
            string word = "";
            while (i + 1 < str.length() && str[i] != ' ') {
                word += str[i];
                i++;
            }
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
        } else {
            while (i + 1 < str.length() && str[i] == ' ') {
                i++;
            }
            if (i < str.length()) {
                string word = "";
                while (i + 1 < str.length() && str[i] != ' ') {
                    word += str[i];
                    i++;
                }
                result += word;
            }
        }
    }
    return result;
}