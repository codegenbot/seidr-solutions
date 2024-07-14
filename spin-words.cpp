Here's the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = start;
        
        while (end < str.length() && str[end] != ' ') {
            end++;
        }
        
        std::string word = str.substr(start, end - start);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}