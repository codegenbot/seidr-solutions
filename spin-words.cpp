string spinWords(const string &str) {
    istringstream iss(str);
    string word, result;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}