```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;
                break;
            case 'F':
                if (result)
                    result = false;
                else
                    return false;
                i++;
                break;
            case '|': {
                bool subResult = true;
                while (i < s.size() && s[i] == '|') {
                    i++;
                }
                for (; i < s.size(); ) {
                    char c = s[i];
                    i++;
                    if (c == 'F')
                        subResult = false;
                    else if (c != '&')
                        return false; // invalid expression
                }
                result = subResult;
                break; }
            case '&': {
                bool subResult = true;
                for (; i < s.size(); ) {
                    char c = s[i];
                    i++;
                    if ((c == 'F' && !subResult) || (c != 'T'))
                        return false; 
                    if (c == 'F')
                        subResult = false;
                }
                result = subResult;
                break; }
        }
    }
    return result;
}

int main() {
    std::string input;

    std::cout << "Enter a boolean expression: ";
    
    std::getline(std::cin, input); // Read the entire line at once

    bool result = solveBoolean(input);

    if (result) {
        std::cout << "The resulting Boolean is true." << std::endl;
    } else {
        std::cout << "The resulting Boolean is false." << std::endl;
    }
    
    return 0;
}