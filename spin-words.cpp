Here is the solution:

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
        } else {
            wordLength = 0;
            while(i < sentence.length() && sentence[i] != ' ') {
                i++;
                wordLength++;
            }
            string word = "";
            for(int j = i-1; j >= 0; j--) {
                word += sentence[j];
            }
            if(wordLength > 4) {
                result += word + " ";
            } else {
                result += sentence.substr(0, i) + " ";
                i--;
            }
        }
    }
    
    return result;
}