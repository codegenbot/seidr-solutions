#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    bool foundNonZero = false;
    int i = 0;
    while (i < s.length()) {
        if (s[i] != '0') {
            foundNonZero = true;
            break;
        }
        i++;
    }
    if (!foundNonZero) {
        return 0; // If there are only zeros in the string, return 0
    }
    
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] == '0') || (s[i] - '0' == s[i + 1] - '0')) {
            sum += (s[i] - '0');
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
}