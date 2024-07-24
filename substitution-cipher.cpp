#include <string>

std::string decipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result(cipher2.size(), ' ');
    
    for (int i = 0; i < message.length(); ++i) {
        if (i < cipher1.length()) {
            int index = cipher1.find(message[i]);
            if (index != std::string::npos) {
                result[i] = cipher2[index];
            }
        }
    }
    
    return result;
}