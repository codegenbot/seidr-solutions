#include <iostream>
#include <string>

int main() {
    std::string expression;
    std::cin >> expression;
    
    if (expression == "t") {
        std::cout << "True";
    } else {
        std::cout << "False";
    }
    
    return 0;
}