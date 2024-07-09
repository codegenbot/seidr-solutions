```cpp
#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delimiter = ' ') {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        result.push_back(token);
    }

    return result;
}

std::string join(const std::vector<std::string>& words, char delimiter = ' ') {
    std::string result;

    for (const auto& word : words) {
        result += word + delimiter;
    }

    // Remove trailing delimiter if present
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str);
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (temp.length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            result += temp + " ";
        } else {
            result += temp + " ";
        }
    }

    return join({result});
}