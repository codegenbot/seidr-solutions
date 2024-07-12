#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string expression = "T|F&F";

    std::vector<char> operands;

    // Code to parse the expression and store operands goes here

    if (operands.size() < 2) {
        return 1; // or throw an exception for invalid expression
    }

    // Code to evaluate the boolean expression and return the output goes here

    return 0;
}