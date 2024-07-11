#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    
    if (input == "t") {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}