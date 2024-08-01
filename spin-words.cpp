#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t length = pos;
        
        if (length + 1 >= 5) {
            for (int i = length; i >= 0; --i) {
                result += str[i];
            }
        } else {
            result += str.substr(0, pos);
        }
        
        str.erase(0, pos + 1);
    }
    
    if (str.length() >= 5) {
        for (int i = str.length() - 1; i >= 0; --i) {
            result += str[i];
        }
    } else {
        result += str;
    }
    
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}