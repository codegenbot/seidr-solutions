```c++
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << "The paired digits sum is: " << pairedDigits(input) << std::endl;
    return 0;
}