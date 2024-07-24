#include <string>
namespace {
    std::string cipher(std::string cipher1, std::string cipher2, std::string input) {
        std::string result = "";
        for (char c : input) {
            size_t pos = cipher2.find(std::tolower(c)); 
            if (pos != std::string::npos) {
                char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
                size_t pos1 = std::string(cipher1).find(std::tolower(originalCase));
                if (pos1 != std::string::npos) {
                    result += cipher2[pos];
                } else {
                    result += c; 
                }
            }
        }
        return result;
    }
}