#include <string>

int pairedDigits(const std::string& s) {
    int num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i + 1] - '0')) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}