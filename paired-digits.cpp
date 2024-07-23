```c++
#include <string>

int main() {
    std::string s = "your_string_of_digits";
    int result = pairedDigits(s);
    return 0;
}

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;