#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string s;
    // Read input from user
    std::cin >> s;
    int result = pairedDigits(s);
    // Print output
    std::cout << result << std::endl;
    return 0;
}