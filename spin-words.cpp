```
std::string spinWords(std::string str) {
    std::string result = "";
    bool longWord = false;

    for (char c : str) {
        if (c == ' ') {
            if (!longWord) {
                result += word + " ";
                word = "";
            } else {
                std::reverse(word.begin(), word.end());
                result += word + " ";
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
        std::reverse(word.begin(), word.end());
        result += word;
    }

    return result;
}