```c++
#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    while (s[0] == '0' && s.length() > 1) s.erase(0, 1);
    std::string str = s; 
    for (int i = 0; i < str.length() - 1; i++) {
        if ((i < str.length() - 1) && ((str[i] == '0') || (str[i] - '0' == str[i + 1] - '0'))) {
            sum += (str[i] - '0');
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