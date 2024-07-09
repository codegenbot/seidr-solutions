#include <algorithm>
#include <string>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    size_t pos = 0;
    size_t prevPos = 0;
    while ((pos = str.find(delimiter, prevPos)) != std::string::npos) {
        if (prevPos != pos) {
            result.push_back(str.substr(prevPos, pos - prevPos));
        }
        prevPos = pos + 1;
    }
    if (prevPos < str.length()) {
        result.push_back(str.substr(prevPos));
    }
    return result;
}

std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            result += temp + " ";
        } else {
            result += temp + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}