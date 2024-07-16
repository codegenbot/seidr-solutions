#include <string>
#include <algorithm>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2 - 1, 2);
    } else {
        return std::to_string(s[len/2]);
    }
}