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
        std::string temp;
        while (true) {
            char c;
            temp.clear();
            while ((c = std::cin.get()) != '\n') {
                temp += c;
            }
            input = temp;
            if(input == "exit") {
                std::cout << "Goodbye!" << std::endl;
                return 0;
            }
            else {
                bool result = solveBoolean(input);
                std::cout << "Result: " << (result ? "True" : "False") << std::endl;
            }
        }
    }
}