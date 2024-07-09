#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result += s[n / 2];
    } else {
        result += s[(n-1)/2];
        result += s[n/2];
    }
    return result;