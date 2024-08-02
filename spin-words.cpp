#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::stringstream ss(str);
    std::string word;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
    }
    
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}