#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = "";

    for (char c : message) {
        size_t idx = cipher1.find(c);
        if (idx != std::string::npos) {
            decipheredMessage += cipher2[idx];
        } else {
            idx = cipher2.find(c);
            if (idx != std::string::npos) {
                decipheredMessage += cipher1[idx];
            } else {
                decipheredMessage += c;  // Leave the character unchanged if not found in either cipher
            }
        }
    }

    return decipheredMessage;
}