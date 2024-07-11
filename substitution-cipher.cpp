#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = message;
    
    for (char& c : decipheredMessage) {
        size_t idx = cipher1.find(c);
        if (idx != std::string::npos) {
            c = cipher2[idx];
        } else {
            idx = cipher2.find(c);
            if (idx != std::string::npos) {
                c = cipher1[idx];
            }
        }
    }
    
    return decipheredMessage;
}