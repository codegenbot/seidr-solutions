#include <iostream>
#include <string>

int main() {
    std::string expr;
    std::cin >> expr;
    
    if (expr == "t") {
        std::cout << "True";
    } else {
        std::cout << "False";
    }
    
    return 0;
}