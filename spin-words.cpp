string spinWords(const string &str) {
    string result = "";
    istringstream iss(str);
    string word;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back();
    
    return result;
}