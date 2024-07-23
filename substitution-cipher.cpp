#include <string>
#include <cctype>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    
    for (auto c : input) {
        if (c != '\0') {  
            size_t pos = cipher2.find(std::tolower(c)); 
            if (pos != std::string::npos) {
                result += cipher1[pos]; 
            } else {
                char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
                size_t pos2 = cipher1.find(originalCase); 
                if (pos2 != std::string::npos) {
                    result += originalCase; 
                } else {
                    result += c; 
                }
            }
        }
    }
    
    return result;
}