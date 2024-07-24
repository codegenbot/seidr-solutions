#include <string>

std::string middleCharacter(std::string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return std::string(1, str[len/2 - 1]) + std::string(1, str[len/2]);
    } else {
        return std::string(1, str[len/2]);
    }
}