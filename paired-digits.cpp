#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] == '0' && i < s.length() - 1) || (s[i] != '0' && s[i] == s[i + 1])) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::cin >> str;
    int result = pairedDigits(str);
    std::cout << "The sum of the paired digits is: " << result << std::endl;
    return 0;
}