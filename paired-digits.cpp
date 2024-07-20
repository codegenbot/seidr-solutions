```
#include <iostream>
#include <string>
#include <algorithm>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i + 1] - '0')) {
            sum += (s[i] - '0');
        }
    }
    return sum;
}

int main() {
    std::string s;
    std::cout << "Enter a string of digits: ";
    std::getline(std::cin, s);
    s.erase(0, s.find_first_not_of('0'));
    int result = pairedDigits(s);
    std::cout << "Sum of the paired digits is: " << result << std::endl;
    return 0;
}