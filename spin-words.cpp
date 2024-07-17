#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int length = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
            result += " ";
        } else {
            length++;
            result += str[i];
            
            if (length >= 5) {
                std::string temp = "";
                for (int j = length - 1; j >= 0; j--) {
                    temp += str[i - j];
                }
                result += temp;
                i -= length - 1;
            }
        }
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