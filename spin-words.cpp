```c++
std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string temp = words[i];
            std::reverse(temp.begin(), temp.end());
            words[i] = temp;
        }
    }
    return join(words, ' ');
}

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

std::string join(const std::vector<std::string>& vec, char c) {
    std::string result;
    for (const auto& s : vec) {
        if (!result.empty()) {
            result += c;
        }
        result += s;
    }
    return result;
}