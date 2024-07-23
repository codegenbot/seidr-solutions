```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = false;
    bool lastOp = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            lastOp = true;
        } else if (s[i] == '&') {
            lastOp = false;
        }
    }

    return result || lastOp;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::getline(std::cin, input);  
    bool result = solveBoolean(input);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}