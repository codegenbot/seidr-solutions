#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int start = len / 2;
    std::string result = (len % 2 == 0) ? s.substr(start - 1, 2) : s.substr(start - 1, 1);
    
    return result;