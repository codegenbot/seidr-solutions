#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result;
    if(n % 2 == 1) {
        result = s.substr(n / 2 - 1, 1);
    } else {
        result = s.substr(n / 2 - 1, 2);
    }
    return result;