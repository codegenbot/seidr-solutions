```cpp
#include <iostream>
#include <string>
#include <new>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;

    while (i < s.size()) {
        if (s[i] == '|') {
            if (s[++i] == 'T' || s[i] == 'F')
                return true; // || with T or F is always true
            else if (s[i] != '|')
                return false; // invalid expression
        } else if (s[i] == '&') {
            bool subResult = true;
            while (i < s.size()) {
                switch (s[i]) {
                    case 'T':
                        i++;
                        break;
                    case 'F':
                        return false; // & with F is always false
                    case '|':
                        if (subResult)
                            return true; // && with T and | is always true
                        else
                            return false; // && with F and | is always false
                }
            }
        } else {
            switch (s[i]) {
                case 'T':
                    i++;
                    break;
                case 'F':
                    return false; // & or | with F is always false
                case '|':
                    if (result)
                        return true; // || with T is always true
                    else
                        return false; // || with F is always false
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