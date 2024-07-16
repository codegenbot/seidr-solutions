#include <string>
#include <cstddef>

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if ((str[i] - '0') == (str[i + 1] - '0')) {
            sum += (str[i] - '0');
        }
    }
    return sum;
}