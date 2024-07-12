#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i + 1] - '0')) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string input = "77777777777777";
    int sum = pairedDigits(input);
    return 0;
}