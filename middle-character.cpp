
#include <string>
std::string getMiddleChar(std::string str) {
    int len = str.length();
    if (len % 2 == 0) { // If the length is even
        return str.substr(len / 2 - 1, 2);
    } else { // If the length is odd
        return str.substr(len / 2, 1);
    }
}