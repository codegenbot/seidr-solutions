#include <string>
#include <cctype>
#include <iostream>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += int(s[i]) - 48;
        }
    }
    return sum;
}

int main() {
    int sum = pairedDigits("123212");
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}