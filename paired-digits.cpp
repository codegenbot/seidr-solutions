```cpp
#include <string>
#include <iostream>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            int currentPair = (s[i] - '0') * 10 + (s[i + 1] - '0');
            sum += currentPair;
            i++; // Skip the next iteration
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