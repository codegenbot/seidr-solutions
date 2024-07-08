#include <string>
std::string getMiddleChar(std::string str) {
    int len = str.length();
    if (len % 2 != 0) { // If length is odd, return middle character
        return str.substr(len / 2, 1);
    } else { // If length is even, return the two middle characters
        return str.substr(len / 2 - 1, 2);
    }
}