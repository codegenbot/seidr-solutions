```cpp
#include <string>
#include <iostream>
#include <limits>

bool solveBoolean(const std::string& s) {
    bool result = true;
    char c;
    while ((c = getchar()) != '\n' && c != '\0') {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            bool operand = true;
            while ((c = getchar()) != '&' && c != '\n' && c != '\0') {
                if (c == 'F')
                    operand = false;
                else if (c == 'T')
                    operand = true;
            }
            result &= operand;
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a Boolean expression: ";
    std::cin >> std::ws;
    std::string input;
    getline(std::cin, input);
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}