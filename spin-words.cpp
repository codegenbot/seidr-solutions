Here is the modified code:

std::string spinWords(std::string str) {
    std::string result = "";
    bool longWord = false;
    std::string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (!longWord) {
                result += word + " ";
                word = "";
            } else {
                std::reverse(word.begin(), word.end());
                result += std::string(word.rbegin(), word.rend()) + " "; 
                word = "";
                longWord = false;
            }
        } else {
            word += c;
            if (word.length() >= 5) {
                longWord = true;
            }
        }
    }

    if (!longWord) {
        result += word;
    } else {
        std::string revWord(word.rbegin(), word.rend()); 
        result += revWord + " ";
        word = "";
        longWord = false;
    }

    return result;