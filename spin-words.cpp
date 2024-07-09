Here is the solution:

string spinWords(string str) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    words.push_back(word);
    
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            words[i] = reverse(words[i]);
        }
    }
    
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

string reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}