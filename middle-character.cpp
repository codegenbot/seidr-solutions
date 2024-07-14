Here is the completed code:

#include <string>

string middleCharacter(const string& str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr(len / 2 - 1, 2);
    } else {
        return string(1, str[len / 2]);
    }
}