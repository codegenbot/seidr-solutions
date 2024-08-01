#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    size_t prev = 0, readPos = 0;
    while ((readPos = str.find(' ', readPos)) != std::string::npos) {
        words.push_back(str.substr(prev, readPos - prev));
        prev = ++readPos;
    }
    // Add the last word
    words.push_back(str.substr(prev));

    for (size_t i = 0; i < words.size(); ++i) {
        if (words[i].length() >= 5)
            std::reverse(words[i].begin(), words[i].end());
    }

    std::string result;
    for (const auto& word : words)
        result += word + " ";
    return result.substr(0, result.size() - 1);
}

int main() {
    // Test cases
    std::cout << spinWords("a") << std::endl;  // a
    std::cout << spinWords("this is a test") << std::endl;  // this is a test
    std::cout << spinWords("this is another test") << std::endl;  // this is rehtona test
    std::cout << spinWords("hi") << std::endl;  // hi

    return 0;
}