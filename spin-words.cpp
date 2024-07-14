#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            size_t length = i - start;
            if (length >= 5) {
                std::string word = input.substr(start, length);
                for(size_t j = 0; j < length/2; ++j) {
                    std::swap(word[j], word[length-1-j]);
                }
                output += word + ' ';
                start = i + 1;
            } else {
                output += input.substr(start, length) + ' ';
                start = i + 1;
            }
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