#include <iostream>
#include <string>

int main() {
    std::string expression;
    std::cin >> expression;
    
    if (expression == "T") {
        std::cout << "True";
    } else {
        std::cout << "False";
    }
    
    return 0;
}