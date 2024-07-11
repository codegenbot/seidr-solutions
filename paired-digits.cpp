```cpp
#include <string>

int main() {
    int sum = pairedDigits("123212");
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

int pairedDigits(const std::string& s) -> int { 
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}