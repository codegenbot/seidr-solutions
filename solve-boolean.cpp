#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    
    if (input == "T" || input == "t") {
        std::cout << "True" << std::endl;
    } else if (input == "F" || input == "f") {
        std::cout << "False" << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }
    
    return 0;
}