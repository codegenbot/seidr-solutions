#include <sstream>

std::string middleCharacter(std::string s) {
    int length = s.length();
    if(length % 2 == 0){
        return s.substr((length/2)-1, 2);
    } else {
        return std::string(1, s[length/2]);
    }
}