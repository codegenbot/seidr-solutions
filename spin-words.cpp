#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(' ')) != std::string::npos) {
        if (str.length() - pos > 4) {
            auto word = str.substr(0, pos);
            std::reverse(word.begin(), word.end());
            result += word + " ";
            str.erase(0, pos + 1);
        } else {
            result += str.substr(0, pos + 1);
            str.erase(0, pos + 1);
        }
    }
    
    if (str.length() > 4) {
        std::reverse(str.begin(), str.end());
    } else {
        result += str;
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