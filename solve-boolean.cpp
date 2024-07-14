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
            while(i+1<s.length() && s[i+1] == '&') i++;
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    char input[100]; 
    std::cout << "Enter a Boolean expression (T/F/|/&): "; 
    while (std::cin >> input) {
        if (std::string(input) == "exit") {
            std::cout << "Goodbye!" << std::endl;
            return 0;
        }
        bool result = solveBoolean(std::string(input));
        std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    }
}