#include <sstream>

char* middleCharacter(char* s) {
    int length = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        length++;
    }
    if (length % 2 == 0) {
        return &s[length / 2 - 1];
    } else {
        char c;
        c = s[length / 2];
        c += '\0';
        return &c;
    }
}