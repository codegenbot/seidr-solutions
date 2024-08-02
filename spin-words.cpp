#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (char c : str) {
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
        size_t end = result.find(" ", pos + 1);
        if (end == std::string::npos)
            end = result.length();
        if (end - start >= 5) {
            std::reverse(result.begin() + start, result.begin() + end);
        }
        pos = end;
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}