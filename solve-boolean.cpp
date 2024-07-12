#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<char> operands;
    // Read input into operands vector
    if (operands.size() < 2) {
        return false; // or throw an exception for invalid expression
    }

    // Evaluate the Boolean expression
    bool result = operands[0] == 't';   // evaluating the first operand as a starting point

    for (int i = 1; i < operands.size(); i += 2) {
        if (operands[i] == '|') {
            result = result || (operands[i + 1] == 't');
        } else if (operands[i] == '&') {
            result = result && (operands[i + 1] == 't');
        }
    }

    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}