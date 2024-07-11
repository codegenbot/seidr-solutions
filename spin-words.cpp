#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    while (std::cout << "Enter a string: ", std::getline(std::cin, str)) {
        std::cout << "Spin words: " << spinWords(str) << std::endl;
    }
    return 0;
}