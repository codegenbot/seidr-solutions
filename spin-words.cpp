std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }

    // Reverse the entire result string
    std::reverse(result.begin(), result.end());

    return result;
}