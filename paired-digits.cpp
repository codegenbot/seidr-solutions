```cpp
#include <iostream>
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (std::string::iterator it = s.begin(); it != s.end(); ++it) {
        if (*it == '0') {
            if (it + 1 != s.end() && *it == *(it+1)) sum += (int)*it - '0';
        }
        else if ((int)*it - '0' == (int)*(it + 1) - '0') sum += (int)*it - '0';
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