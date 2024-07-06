
#include <string>
int pairedDigits(string input) {
    int sum = 0;
    for (int i = 0; i < input.length() - 1; i++) {
        if (input[i] == input[i + 1]) {
            sum += input[i] - '0';
        }
    }
    return sum;
}