#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, std::string message) {
    if (cipher1.length() != cipher2.length()) {
        return "Error: Cipher strings must have the same length.";
    }

    for (char &c : message) {
        size_t index = cipher1.find(c);
        if (index != std::string::npos) {
            c = cipher2[index];
        } else {
            index = cipher2.find(c);
            if (index != std::string::npos) {
                c = cipher1[index];
            }
        }
    }
    return message;
}