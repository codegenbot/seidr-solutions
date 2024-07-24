Here's the solution:

#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    size_t start = 0;
    for (size_t end = 0; end <= input.size(); ++end) {
        if (end == input.size() || input[end] == ' ') {
            std::string word = input.substr(start, end - start);
            if (word.size() >= 5)
                std::reverse(word.begin(), word.end());
            output += word + (end == input.size() ? "" : " ");
            start = end + 1;
        }
    }
    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}