#include <string>

int pairedDigits(const string& input) {
    int sum = 0;
    for (int i = 0; i < input.size() - 1; i++) {
        if (input[i] == input[i + 1]) {
            sum += input[i] - '0';
        }
    }
    return sum;
}