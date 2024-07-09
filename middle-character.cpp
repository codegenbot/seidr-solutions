#include <string>
std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 1) {
        return std::string(1, s.substr((len-1)/2, 1)[0]);
    } else {
        return s.substr((len/2)-1, 2);
    }
}