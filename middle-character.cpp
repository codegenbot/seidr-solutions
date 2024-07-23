#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return s.substr(len/2, len % 2 == 0 ? 2 : 1);
}