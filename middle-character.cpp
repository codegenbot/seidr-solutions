#include <string>

std::string middleCharacter(const std::string& s) {
    int length = s.length();
    if (length % 2 == 1) {
        return std::string(1, s[length / 2]);
    } else {
        return std::string(1, s[(length - 1) / 2]) + std::string(1, s[(length + 1) / 2]);
    }
}