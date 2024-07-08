#include <string>
char getMiddleChar(std::string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str[len / 2];
    } else {
        return str[len / 2 - 1];
    }
}