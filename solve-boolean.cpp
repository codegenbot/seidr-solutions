#include <iostream>
#include <string>

int main() {
    std::string expr;
    std::cin >> expr;
    
    if (expr == "T") {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}