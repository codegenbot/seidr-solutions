string spinWords(string str) {
    vector<string> words;
    
    string word = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    
    words.push_back(word);
    
    string result = "";
    
    for(auto w : words) {
        if(w.length() >= 5) {
            reverse(w.begin(), w.end());
        }
        
        result += w + " ";
    }
    
    // Remove extra space at the end of the output string
    result.erase(result.size() - 1);
    
    return result;
}