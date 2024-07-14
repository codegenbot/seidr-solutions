```cpp
#include <iostream>
#include <string>

bool solveBoolean(const std::string& s) {
    bool result = true;
    for (char c : s) {
        if (c == 'F') {
            return false;
        }
        else if (c == '|') {
            result = !result;
        }
        else if (c == '&') {
            while(s.find('&', i+1) != std::string::npos) i++;
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
        if (!(std::cin >> input)) {  // check if read operation was successful
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