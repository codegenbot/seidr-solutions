#include <string>

int pairedDigitsSum(const std::string& input) {
    int sum = 0;
    for (size_t i = 0; i < input.length() - 1; ++i) {
        if (input[i] == input[i + 1]) {
            sum += input[i] - '0';
        }
    }
    return sum;
}