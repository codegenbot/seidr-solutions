#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0){
        return std::string(1, s[len/2-1]) + std::string(1, s[len/2]);
    } else{
        return std::string(1, s[len/2]);
    }
}