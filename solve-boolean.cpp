```cpp
#include <string>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    for (char c : s) {  
        if (c == 'T' || c == 'F') {
            result = c == 'T';
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            bool operand = true;
            for (; c != '&' && c != '\0'; ++c) {
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
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> input;
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}