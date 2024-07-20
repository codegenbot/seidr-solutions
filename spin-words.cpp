string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i;
            while(j < str.length() && str[j] != ' ') {
                j++;
            }
            if(j < str.length())
                j--;
            string word = str.substr(i, j - i + 1);
            if(word.length() >= 5) {
                for(int k = word.length() - 1; k >= 0; k--) {
                    result += word[k];
                }
            } else {
                result += word;
            }
            i = j + 1;
        }
    }
    return result;
}