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
    while (true) {
        char c;
        input.clear();
        while ((c = static_cast<char>(std::cin.get())) != '\n') {
            input += c;
        }
        bool result = solveBoolean(input);
        if(input == "exit") {
            std::cout << "Goodbye!" << std::endl;
            return 0;
        }
        else {
            std::cout << "Invalid input. Please enter a valid Boolean expression or 'exit' to quit: ";
            continue;  // loop back and ask for input again
        }
        std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    }
}