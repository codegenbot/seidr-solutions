```cpp
#include <iostream>
#include <string>
#include <cctype>

bool solveBoolean(const std::string& s, size_t& i) {
    bool result = true;

    while (i < s.size()) {
        switch (std::tolower(s[i])) {
            case 't':
                i++;  // skip T
                return true;
            case 'f':
                i++;  // skip F
                return false;
            case '&': {
                i++; // skip &
                if (!solveBoolean(s, i)) return false;  // short-circuit
                break;
            }
            case '|': {
                i++; // skip |
                result = result || solveBoolean(s, i);
                if (result) return true;  // short-circuit
                break;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, input);

    size_t i = 0;
    bool result = solveBoolean(input, i);

    if (result) {
        std::cout << "The result is True." << std::endl;
    } else {
        std::cout << "The result is False." << std::endl;
    }

    return 0;
}