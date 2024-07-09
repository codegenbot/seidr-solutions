std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string join(const std::vector<std::string>& vec, char delimiter) {
    std::string result;
    for (const auto& s : vec) {
        result += s + delimiter;
    }
    return result.substr(0, result.size() - 1);
}

std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result; 
    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            if (i > 0) { // add space only for long words
                result += " ";
            }
            result += temp;
        } else {
            result += temp + " ";
        }
    }
    return join(std::vector<std::string>{result}, ' ');
}