```cpp
#include <string>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (int i = 0; i < s.length(); i++) {
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
            operand *= s[i] == 'F'; // update operand based on current character
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a Boolean expression: ";
    std::string input;
    getline(std::cin, input);  // Use std::getline from namespace std.
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}