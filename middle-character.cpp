#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 1) {
        return std::string(1, s[len/2]);
    } else {
        return std::string(1, s[(len-1)/2]) + std::string(1, s[(len+1)/2]);
    }
}