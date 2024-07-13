std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() >= 5) {
                word = std::string(word.rbegin(), word.rend()); 
            }
            
            result += word + " "; 
            word.clear();
        } else {
            word.push_back(str[i]);
        }
    }
    
    return result.substr(0, result.length() - 1); 
}