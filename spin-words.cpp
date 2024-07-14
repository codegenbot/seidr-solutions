std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t spacePos = str.find(' ', start);
        if (spacePos == std::string::npos)
            spacePos = str.length();
        std::string word = str.substr(start, spacePos - start);
        if (word.length() >= 5) {
            result += std::string(word.rbegin(), word.rend()) + " ";
        } else {
            result += word + (start == str.length() - 1 ? "" : " ") + "";
        }
        start = spacePos + 1;
    }
    return result.substr(0, result.find(" ") == std::string::npos ? 0 : result.find(" ") + 1);
}