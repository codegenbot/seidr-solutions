#include <string>

std::string middleCharacter(std::string str) {
    int len = str.length();
    if(len % 2 == 1) {
        return std::to_string(str[len/2]);
    } else {
        return str.substr(len/2-1, 2);
    }
}