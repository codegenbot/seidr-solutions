#include <string>
#include <vector>

std::string spinWords(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5)
            words.push_back(word.substr(rev(word)));
        else
            words.push_back(word);
    }

    std::stringstream result;
    for (const auto& w : words) {
        result << w << " ";
    }
    return result.str();
}

std::string rev(const std::string& s) {
    int len = s.length();
    char* arr = new char[len + 1];
    strcpy(arr, s.c_str());

    for (int i = 0; i < len / 2; ++i) {
        char t = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = t;
    }
    return arr;
}