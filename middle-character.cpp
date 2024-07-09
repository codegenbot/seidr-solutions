#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    if (n % 2 == 1) {
        return std::string(1, s[n / 2]);
    } else {
        return std::string(1, s[(n - 1) / 2]) + std::string(1, s[n / 2]);
    }
}