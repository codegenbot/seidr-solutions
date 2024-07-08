#include <string>
std::string getMiddleChar(std::string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr((len / 2) - 1, 2);
    } else {
        char midChar = str[len / 2];
        if (isalnum(midChar)) {
            return std::string(1, midChar);
        } else {
            return "0U";
        }
    }
}