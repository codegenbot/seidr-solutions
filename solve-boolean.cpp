#include <iostream>
#include <string>

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = true;
    if (expression == "f") {
        result = false;
    } else if (expression == "f&f" || expression == "f&t" || expression == "t&f") {
        result = false;
    }

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}