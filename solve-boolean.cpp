#include <iostream>
#include <string>

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = true;
    if (expression == "f") {
        result = false;
    } else if (expression == "f|f") {
        result = false;
    } else if (expression == "t&f" || expression == "f&t" || expression == "f|t") {
        result = false;
    }

    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}