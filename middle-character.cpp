#include <string>

string middleCharacter(string str) {
    int length = str.length();
    if (length % 2 == 1) {
        return string(1, str.substr(length / 2, 1));
    } else {
        return string(1, str.substr(length / 2 - 1, 2));
    }
}