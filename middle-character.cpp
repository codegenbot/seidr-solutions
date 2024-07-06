#include <string>

std::string getMiddle(std::string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr((len / 2) - 1, 2);
    } else if (len > 1 && str[len - 1] == '-') {
        return std::string(1, str[len - 1]) + "U";
    } else {
        return str.substr(len / 2, 1);
    }
}