#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    int i = 0;

    while (i <= str.length()) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
        i++;
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}