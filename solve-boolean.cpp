#include <iostream>
#include <string>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return false; 
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (int i = 0; s[i]; ++i) {
        if (s[i] == 'T') {
            result = true;
            operand = 1;
        } else if (s[i] == 'F') {
            result = false;
            operand = 0;
        } else if (s[i] == '|') {
            result ^= operand; // perform bitwise OR
            operand = 1; // reset operand to true
        } else if (s[i] == '&') {
            result &= operand; // perform bitwise AND
            if (operand) {
                operand = false;
            }
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a Boolean expression: ";
    std::string input;
    getline(std::cin, input); 
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}