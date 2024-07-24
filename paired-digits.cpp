#include <string>

int pairedDigits(const string& s) {
    int sum = 0;
    for (size_t i = 0; i < s.length() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}