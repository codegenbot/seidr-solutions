#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 1) {
        return std::string(1, s.substr(length / 2, 1));
    } else {
        return s.substr((length - 1) / 2, 1) + s.substr((length + 1) / 2, 1);
    }
}