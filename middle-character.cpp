#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 1) {
        return std::string(1, s[(length - 1) / 2]);
    } else {
        return std::string(1, s[length / 2 - 1]) + std::string(1, s[length / 2]);
    }
}