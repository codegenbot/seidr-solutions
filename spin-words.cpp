Here is the solution:

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
        } else {
            for (wordLength = 1; i + wordLength <= sentence.length() && sentence[i + wordLength] != ' '; wordLength++) {}
            string word = sentence.substr(i, wordLength);
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            i += wordLength - 1;
        }
    }
    return result;
}