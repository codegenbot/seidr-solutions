#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        if (end == std::string::npos) {
            end = str.length();
        }
        
        std::string word = str.substr(start, end - start);
        
        if (word.length() >= 5) {
            for (int i = word.length() - 1; i >= 0; --i) {
                result += word[i];
            }
        } else {
            result += word;
        }
        
        start = end + 1;
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}