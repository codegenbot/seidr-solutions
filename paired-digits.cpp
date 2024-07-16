```c++
#include <iostream>

int main() {
    char c;
    int sum = 0;
    std::cout << "Enter a string of digits: ";
    
    while((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            if (c == getchar()) { 
                sum += c - '0'; 
            }
        }
    }
    std::cout << "Sum of paired digits is: " << sum << std::endl;
    std::cout << "Program has finished." << std::endl;
}