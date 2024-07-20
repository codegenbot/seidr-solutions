#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    if (s.length() == 0) {
        return sum;
    }
    if (s.length() == 1) {
        return 0;
    }
    for (int i = 0; i < s.length() - 1; i++) {
        if (i == 0) { // first char, no preceding digit
            if ((s[i] - '0') == (s[i + 1] - '0')) {
                sum += s[i] - '0';
            }
        } else { // all other chars, check for consecutive identical digits
            if ((s[i] - '0') == (s[i + 1] - '0')) {
                sum += s[i] - '0';
            }
        }
    }
    return sum;
}

int main() {
    std::string s;
    std::cout << "Enter a string of digits: ";
    std::cin >> s;
    int result = pairedDigits(s);
    std::cout << "Sum of the paired digits is: " << result << std::endl;
    return 0;
}