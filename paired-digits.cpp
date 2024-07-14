#include <string>

int pairedDigits(const std::string& s) {
    int num = 0;
    for (auto c : s) {
        num = num * 10 + (c - '0');
    }
    int sum = 0;
    for (int i = 0; i < std::to_string(num).size() - 1; i++) {
        if ((std::to_string(num)[i] - '0') == (std::to_string(num)[i + 1] - '0')) {
            sum += (std::to_string(num)[i] - '0') * 2;
        }
    }
    return sum;
}