#include <string>
std::string getMiddleChar(std::string str) {
    int len = str.length();
    if (len % 2 == 0) { // even length
        return str.substr((len / 2) - 1, 2);
    } else { // odd length
        return str.substr(len / 2, 1) + str.substr(len / 2 + 1, 1);
    }
}