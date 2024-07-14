Here is the solution:

string spinWords(string str) {
    string result = "";
    int wordLen;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
        } else {
            for (wordLen = i + 1; str[wordLen] != ' '; wordLen++);
            string word = str.substr(i, wordLen - i);
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
            } else
                result += word;
            i = wordLen - 1;
        }
    }

    return result;
}