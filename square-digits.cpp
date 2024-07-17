```c++
#include <iostream>
#include <string>

std::string squareDigitsStr(int n) {
    std::string result = "";
    while(n != 0) {
        int digit = n % 10;
        result = (digit * digit) + result;
        n /= 10;
    }
    return result;
}

int main() {
    int input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::cout << "The square of the digits is: " << squareDigitsStr(input) << std::endl;
    return 0;
}