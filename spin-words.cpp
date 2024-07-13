string spinWords(const string &sentence) {
    string word, result;
    istringstream iss(sentence);
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    if (!result.empty()) {
        result.pop_back(); // Remove extra space at the end
    }
    
    return result;
}