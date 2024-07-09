```cpp
#include <string>
#include <iostream>

int main() {
    std::string input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    std::cout << output << std::endl;
    return 0; 
}