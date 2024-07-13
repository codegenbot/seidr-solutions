```cpp
string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i <= str.length()) {
        if (i == str.length() || str[i] == ' ') {
            int wordLength = i - result.length();
            if (wordLength >= 5) {
                string reversedWord = "";
                for(int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += str[wordLength-1-j];
                }
                result.append(reversedWord).append(" ");
            } else
                result.append(str.substr(i - wordLength, wordLength)).append(" ");
            i++;
        } else 
            i++;
    }
    return result;
}