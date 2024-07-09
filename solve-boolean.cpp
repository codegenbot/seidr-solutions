```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            if (i == s.size() - 1 || (s[i + 1] == '&' && s.find('T', i + 2) != std::string::npos)) {
                return true;
            } else if (i == s.size() - 1 || s[i + 1] == 'F') {
                return false;
            }
            i++;
        } else if (s[i] == '&') {
            bool foundT = false;
            for (int j = i; j < s.size(); j++) {
                if (s[j] == 'T') {
                    foundT = true;
                    break;
                } else if (s[j] == 'F') {
                    return false;
                }
            }
            result = foundT;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, input);
    bool result = solveBoolean(input);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}