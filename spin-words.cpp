#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i - (word.empty() ? 0 : 1), i);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    while (std::cout << "Enter a string (or 'q' to quit): ") {
        if (!(std::cin >> str) || str == "q") break;
        
        std::cout << "Spin words: " << spinWords(str) << "\n";
    }
    
    return 0;