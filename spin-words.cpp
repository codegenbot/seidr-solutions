#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    size_t start = 0;
    
    while (start < input.size()) {
        if (input.find(" ", start) == std::string::npos || input[start] != ' ') {
            size_t end = input.find(" ", start);
            if (end == std::string::npos) {
                end = input.size();
            }
            
            std::string word = input.substr(start, end - start);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            output += word + " ";
        } else {
            start = end + 1;
        }
    }
    
    return output.substr(0, output.size() - 1); // remove the trailing space
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}