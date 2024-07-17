#include <string>

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < static_cast<std::string>(str).length() - 1; i++) {
        if (static_cast<char>(str[i]) == static_cast<char>(str[i + 1])) {
            sum += static_cast<int>(str[i]) - '0';
        }
    }
    return sum;
}