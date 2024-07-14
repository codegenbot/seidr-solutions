#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }

    result += word;

    size_t pos = 0;
    while ((pos = result.find(" ")) != std::string::npos) {
        size_t start = pos;
        while (result.at(pos++) != ' ') {}
        size_t end = pos - 1;
        if (end - start >= 5) {
            for (size_t i = end; i > start; --i) {
                result.replace(i, 1, result.substr(start, end - start + 1));
            }
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;

    return 0;
}