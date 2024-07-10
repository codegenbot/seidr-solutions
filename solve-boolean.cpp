```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    std::string boolStr;
    for (char c : s) {
        boolStr += c;
    }

    bool temp = true;
    int i = 0;
    while (i < boolStr.size()) {
        switch (boolStr[i]) {
            case '|': {
                bool subResult = true;
                for (; i < boolStr.size(); ) {
                    char c = boolStr[i];
                    i++;
                    if (c == 'F')
                        subResult = false;
                    else if (c != 'T' && c != '|')
                        return false; // invalid expression
                }
                temp = subResult;
                break; }
            case '&': {
                bool subResult = true;
                for (; i < boolStr.size(); ) {
                    char c = boolStr[i];
                    i++;
                    if ((c == 'F' && !subResult) || (c != 'T'))
                        return false; 
                    if (c == 'F')
                        subResult = false;
                }
                temp = subResult;
                break; }
            case 'T':
                i++;
                break;
            case 'F':
                if (temp)
                    temp = false;
                else
                    return false;
                i++;
                break;
        }
    }
    return temp;
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