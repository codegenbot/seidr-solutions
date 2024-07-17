```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result;
    std::string word;

    for (char c : sentence) {
        if (c == ' ') {
            result += c;
        } else {
            word += c;
        }
    }

    size_t pos = 0;
    while ((pos = word.find(' ')) != std::string::npos) {
        if (word.length() - pos > 4) {
            std::reverse(word.begin() + pos, word.end());
        }
        result += word.substr(0, pos);
        word.erase(0, pos + 1);
    }

    if (word.length() > 4) {
        std::reverse(word.begin(), word.end());
    }

    result += word;
    return result;
}

int main() {
    std::string sentence;
    while (true) {
        std::cout << "Enter a string of one or more words: ";
        std::getline(std::cin, sentence);
        if (sentence == "exit") break;
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}