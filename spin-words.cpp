Here's the solution:

#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string result = "";
    size_t start = 0;
    
    for (size_t end = 0; end <= input.size(); ++end) {
        if (end == input.size() || input[end] == ' ') {
            std::string word = input.substr(start, end - start);
            
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            start = end + 1;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}