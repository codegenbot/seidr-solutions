string spinWords(string str) {
    string result = "";
    string word = "";
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += "'" + newWord(word) + "'";
            else
                result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        result += "'" + newWord(word) + "'";
    else
        result += word;
    
    return result;
}