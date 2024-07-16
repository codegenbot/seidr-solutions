```cpp
#include <string>
#include <iostream>

bool solveBoolean(const char* s) {
    if (!s || *s == '\0') return false; // handle empty string
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (int i = 0; *s; ++s) {
        if (*s == 'T') {
            result = true;
            operand = 1;
        } else if (*s == 'F') {
            result = false;
            operand = 0;
        } else if (*s == '|') {
            result ^= operand; // perform bitwise OR
            operand = 1; // reset operand to true
        } else if (*s == '&') {
            result &= operand; // perform bitwise AND
            operand *= *s == 'F'; // update operand based on current character
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a Boolean expression: ";
    char inputBuffer[100]; 
    std::cin.get(inputBuffer, 100);
    std::string input = inputBuffer;
    bool output = solveBoolean(input.c_str());
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}