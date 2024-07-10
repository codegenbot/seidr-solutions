#include <string>

string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 != 0)
        return string(1, str[len/2]);
    else
        return string(2, str.substr(len/2 - 1, 2));
}