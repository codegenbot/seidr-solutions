#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    size_t start = 0;
    for (size_t end = 0; end <= input.size(); ++end) {
        if (end == input.size() || input[end] == ' ') {
            std::string word = input.substr(start, end - start);
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            start = end + 1;
        }
    }
    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; 
    std::cout << spinWords("this is a test") << std::endl; 
    std::cout << spinWords("this is another test") << std::endl; 
    std::cout << spinWords("hi") << std::endl; 
    return 0;
}