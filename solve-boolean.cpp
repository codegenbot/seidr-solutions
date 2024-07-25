#include <iostream>
#include <string>

int main() {
    std::string expression;
    std::cin >> expression;
    
    if (expression == "t") {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}