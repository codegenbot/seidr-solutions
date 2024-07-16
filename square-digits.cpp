#include <iostream>
#include <string>
#include <iomanip>

long long int n;
std::string squareDigits(long long int n) {
    std::string output = "";
    while (n > 0) {
        int digit = n % 10; 
        n /= 10;
        output = std::to_string(digit*digit) + output;
    }
    return output;
}

int main() {
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Invalid input.\n";
    } else {
        std::cout << std::setfill('0') << std::setw(__LINE__-3) << squareDigits(n) << "\n";
    }
    
    return 0;
}