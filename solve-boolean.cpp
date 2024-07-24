#include <iostream>
#include <string>

int main() {
    std::string exp;
    std::cin >> exp;

    if (exp == "T" || exp == "t") {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}