#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result;
    std::size_t start = 0;

    for (std::size_t end = 0; end <= str.length(); ++end) {
        if (end == str.length() || str[end] == ' ') {
            std::string word = str.substr(start, end - start);

            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }

            result += word + ((end == str.length()) ? "" : " ");
            start = end + 1;
        }
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