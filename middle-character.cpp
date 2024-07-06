#include <string>

std::string getMiddle(std::string str) {
    int len = str.length();
    if (len % 2 == 0 && len > 1) {
        return str.substr(0, 2);
    } else {
        return str.substr(len / 2, 1);
    }
}