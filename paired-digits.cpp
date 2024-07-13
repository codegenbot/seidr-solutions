#include <cstring>

int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if ((i < strlen(s) - 1 ? (s[i] == s[i + 1]) : s[i] == s[i])) { 
            sum += (s[i] - '0'); 
        }
    }
    return sum;
}