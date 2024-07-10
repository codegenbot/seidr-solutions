```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;

    while (i < s.size()) {
        char c = s[i];

        if (c == 'T')
            i++;
        else if (c == 'F')
            return false; // F is always false
        else if (c == '|') {
            result = true;
            i++;
        }
        else if (c == '&') {
            while (i < s.size() && s[i] != '|') {
                if (s[i] == 'F')
                    return false; // & with F is always false
                i++;
            }
        }
    }

    return result;
}

int main() {
    std::string input;

    std::cout << "Enter a boolean expression: ";
    
    std::getline(std::cin, input); 

    bool result = solveBoolean(input);

    if (result) {
        std::cout << "The resulting Boolean is true." << std::endl;
    } else {
        std::cout << "The resulting Boolean is false." << std::endl;
    }
    
    return 0;
}