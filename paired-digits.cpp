#include <cstring>

int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if ((i+1) < strlen(s) && (s[i] - '0' == s[i+1] - '0')) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;