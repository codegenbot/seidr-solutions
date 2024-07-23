#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    size_t start = 0;
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        if (end == std::string::npos)
            end = str.length();
        if (end - start >= 5) {
            std::string word = str.substr(start, end - start);
            std::reverse(word.begin(), word.end());
            words.push_back(word);
        } else
            words.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    return std::join(words, " ");
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string of one or more words (separated by spaces), or 'exit' to quit: ";
        std::cin >> str;
        if (str == "exit")
            break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}