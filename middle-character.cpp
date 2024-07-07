
#include <string>
std::string getMiddle(std::string str) {
    int len = str.length();
    if (len % 2 == 0) { // If length is even, return middle two characters
        return str.substr((len / 2) - 1, 2);
    } else { // If length is odd, return middle character
        return str.substr(len / 2, 1);
    }
}