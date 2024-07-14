```cpp
#include <iostream>
#include <string>

bool solveBoolean(const std::string& s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '|') {
            result = !result;
        }
        else if (s[i] == '&') {
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    std::string input; 
    std::cout << "Enter a Boolean expression (T/F/|/&): "; 
    while (true) {
        std::cin >> std::ws;  // consume newline character
        if (!std::getline(std::cin, input)) {  // check if read operation was successful
            if(input == "exit") {
                std::cout << "Goodbye!" << std::endl;
                return 0;
            }
            else {
                std::cout << "Invalid input. Please enter a valid Boolean expression or 'exit' to quit: ";
                continue;  // loop back and ask for input again
            }
        }
        bool result = solveBoolean(input);
        std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    }
}