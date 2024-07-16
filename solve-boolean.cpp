```cpp
#include <string>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            bool operand = true;
            while ((c = getchar()) != '&' && c != '\n' && c != EOF) {
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
    std::string input;
    while ((input += getchar()) != "\n") {}
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}