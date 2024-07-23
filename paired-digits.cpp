#include <string>

int main() {
    int sum = pairedDigits("123333");
    std::cout << "Sum of paired digits: " << sum << std::endl;
    return 0;
}

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}