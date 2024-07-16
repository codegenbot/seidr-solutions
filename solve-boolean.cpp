#include <string>
#include <iostream>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return false;
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (int i = 0; i < s.size(); ++i) { 
        char c = s[i]; 
        if (c == '|') {
            result = result || (operand == 1);
            operand = 0;
        } else if (c == '&') {
            result = result && (operand == 1);
            operand = 0;
        } else if (c == 'T') {
            result = result && true;
            operand = 1;
        } else if (c == 'F') {
            result = result && false;
            operand = 0;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression (T/F/|[&]): ";
    std::getline(std::cin, input);
    bool result = solveBoolean(input);
    if (result)
        std::cout << "Result: True" << std::endl;
    else
        std::cout << "Result: False" << std::endl;
    return 0;