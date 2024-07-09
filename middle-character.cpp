#include <string>

std::string middleCharacter(std::string str) {
    int n = str.length();
    if (n % 2 == 1) {
        return std::string(1, str[n / 2]);
    } else {
        return std::string(1, str[(n - 1) / 2]) + std::string(1, str[n / 2]);
    }
}