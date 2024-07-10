```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        }
    }
    return result;
}

int main() {
    std::string input;

    std::cout << "Enter a boolean expression: ";
    
    std::getline(std::cin, input); // Read the entire line at once

    bool result = solveBoolean(input);

    if (result) {
        std::cout << "The resulting Boolean is true." << std::endl;
    } else {
        std::cout << "The resulting Boolean is false." << std::endl;
    }
    
    return 0;
}