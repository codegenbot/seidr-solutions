#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = len / 2;
    if (len % 2 == 0) {
        return s.substr(mid - 1, 2);
    } else {
        return s.substr(mid, 1);
    }
}