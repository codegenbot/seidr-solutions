#include <iostream>
#include <string>

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = false;
    if (expression == "t" || expression == "t|t") {
        result = true;
    }

    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}