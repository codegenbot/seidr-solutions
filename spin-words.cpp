string spinWords(const string &sentence) {
    istringstream iss(sentence);
    string word, result;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove the extra space at the end
    return result;
}