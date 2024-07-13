```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    std::reverse(word.begin(), word.end());
                }
                
                result += word + " ";
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    std::string output = spinWords(str);
    if (!str.empty()) {
        std::cout << output << std::endl;
    } else {
        std::cout << "No input provided." << std::endl;
    }
    
    return 0;
}