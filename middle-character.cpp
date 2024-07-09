#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int start;
    std::string result;
    if(len % 2 == 0) { 
        start = len / 2 - 1; 
        result = s.substr(start, 2);
    } else {
        start = len / 2;
        result = s.substr(start, 1);
    }
    
    return result;
}