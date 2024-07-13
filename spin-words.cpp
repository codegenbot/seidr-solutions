#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() - 1 || str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            word.clear();
        } else {
            word.push_back(str[i]);
        }
    }
    
    result.pop_back(); // remove extra space
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}