string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i <= str.length()) {
        if (i == str.length() || str[i] == ' ') {
            int wordLength = i - result.length();
            if (wordLength >= 5)
                result.append(reverseWord(str.substr(i - wordLength, wordLength)).append(" "));
            else
                result.append(str.substr(i - wordLength, wordLength + 1)).append(" ");
            i++;
        } else 
            i++;
    }
    return result;
}

string reverseWord(string str) {
    string reversed = "";
    for(int j = str.length() - 1; j >= 0; j--) {
        reversed += str[j];
    }
    return reversed;
}