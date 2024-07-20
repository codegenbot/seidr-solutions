#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        std::string temp = std::to_string(s[i]);
        if (s[i] == '0' || temp == s[i+1] + "0" || temp == "00") {
            sum += static_cast<int>(s[i] - '0');
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