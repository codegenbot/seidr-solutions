```cpp
#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] == s[i + 1]) || (s[i + 1] == s[i])) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    std::string s;
    std::cin >> s;
    int result = pairedDigits(s);
    std::cout << "The sum of the digits whose following digit is the same is: " << result << std::endl;
    return 0;
}