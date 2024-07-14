#include <string>
#include <vector>

std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str);
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5)
            words[i] = reverse(words[i]);
    }
    return join(words);
}

std::vector<std::string> split(std::string str) {
    std::vector<std::string> words;
    int start = 0, end = 0;
    while (end < str.length()) {
        if (str[end] == ' ') {
            words.push_back(str.substr(start, end - start));
            end++;
            start = end;
        } else
            end++;
    }
    words.push_back(str.substr(start, end - start));
    return words;
}

std::string join(std::vector<std::string> words) {
    std::string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1)
            result += ' ';
    }
    return result;
}

std::string reverse(std::string str) {
    std::string result = "";
    for (int i = str.length() - 1; i >= 0; i--)
        result += str[i];
    return result;
}