```c++
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            // Process the previous word
            result += word + " ";
            word = "";
        } else if (i == str.length() - 1 || str[i + 1] == ' ') {
            word += str[i];
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            // Process the last word
            if (i == str.length() - 1) {
                result += word;
            } else {
                result += word + " ";
            }
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}