#include <string>

int pairedDigits(std::string s) -> std::string {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return std::to_string(sum);
}