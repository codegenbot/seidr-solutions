string spinWords(const string &sentence) {
    string result = "";
    istringstream iss(sentence);
    string word;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    if (!result.empty()) {
        result.pop_back(); // remove last space
    }
    
    return result;
}