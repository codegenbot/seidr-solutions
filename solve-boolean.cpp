```cpp
#include <iostream>
#include <string>
#include <sstream>

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
            std::advance(s.begin() + ++i, s.end());
            while ((s.begin() + i, s.end()) != s.end() && s[i] == '&') i++;
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    std::stringstream ss;
    char input[100]; 
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    while (ss.get(input, 99).gcount() > 0) {
        input[98] = '\0'; // null-terminate the string
        if (std::string(input) == "exit") {
            std::cout << "Goodbye!" << std::endl;
            return 0;
        }
        bool result = solveBoolean(std::string(input));
        std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    }
}