```c++
#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    std::string temp = s;
    while (temp[0] == '0' && temp.length() > 1) temp.erase(0, 1);
    for (int i = 0; i < temp.length() - 1; i++) {
        if ((i < temp.length() - 1) && ((temp[i] == '0') || (temp[i] - '0' == temp[i + 1] - '0'))) {
            sum += (temp[i] - '0');
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