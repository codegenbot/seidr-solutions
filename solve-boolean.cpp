#include <iostream>
#include <cstdlib>

int main() {
    std::string expression;
    int result = 0;

    while (true) {
        // Get input from user
        std::cout << "Enter a boolean expression (T, F, |, &, ^): ";
        std::getline(std::cin, expression);

        // Check if the input is valid
        if (!expression.empty() && expression != "false") {
            result = atoi(expression.c_str());
            break;
        } else {
            continue;
        }
    }

    // Evaluate the expression
    if (result) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}