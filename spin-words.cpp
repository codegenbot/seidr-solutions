#include <string>

std::string spinWords(std::string sentence) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= sentence.size(); i++) {
        if (i == sentence.size() || sentence[i] == ' ') {
            string word = sentence.substr(start, i - start);
            if (word.size() >= 5) {
                string reversedWord = word;
                std::reverse(reversedWord.begin(), reversedWord.end());
                words.push_back(reversedWord);
            } else {
                words.push_back(word);
            }
            start = i + 1;
        }
    }
    return join(words, " ");
}

std::string join(const std::vector<std::string>& vec, const std::string& sep) {
    std::string result = "";
    for (size_t i = 0; i < vec.size(); i++) {
        result += vec[i];
        if (i < vec.size() - 1)
            result += sep;
    }
    return result;
}