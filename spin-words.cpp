std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                word.push_back(str[i]);
                if (word.length() >= 5) {
                    std::reverse(word.begin(), word.end());
                }
                
                result += word + " ";
                word.clear();
            } else {
                if (result.empty()) {
                    result = str.substr(0, i);
                    break;
                }
            }
        } else {
            word.push_back(str[i]);
        }
    }
    
    return result;
}