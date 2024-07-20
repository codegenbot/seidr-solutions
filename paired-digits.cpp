```cpp
#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        int num = s[i] - '0';
        char strNum[2];
        sprintf(strNum, "%d", num);
        if (strNum[0] == strNum[1]) {
            sum += num;
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