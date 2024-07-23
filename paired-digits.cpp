#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        for (int j = i + 1; j < s.length(); j++) {
            if (c == s[j]) {
                sum += c - '0';
            }
        }
    }
    return sum;
}