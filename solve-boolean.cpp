```cpp
#include <string>
#include <iostream>

bool solveBoolean(const char* s) {
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (char c : std::string(s)) {
        if (c == 'T') {
            result = true;
            operand = 1;
        } else if (c == 'F') {
            result = false;
            operand = 0;
        } else if (c == '|') {
            result ^= operand; // perform bitwise OR
            operand = 1; // reset operand to true
        } else if (c == '&') {
            result &= operand; // perform bitwise AND
            operand *= c == 'F'; // update operand based on current character
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a Boolean expression: ";
    char input[100]; 
    std::cin.get(input, 100); 
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}