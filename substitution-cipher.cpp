#include <iostream>
#include <string>

std::string cipher(std::string cipher1, std::string cipher2, std::string input) {
    std::string result = "";
    for (char c : input) {
        if (c != '\0') {  
            size_t pos = cipher2.find(std::tolower(c)); 
            if (pos != std::string::npos) {
                char decodedChar = cipher1.at(pos);
                if(std::isupper(decodedChar)) {
                    result += std::toupper(decodedChar);
                } else {
                    result += decodedChar;
                }
            } else {
                result += c; 
            }
        }
    }
    return result;
}