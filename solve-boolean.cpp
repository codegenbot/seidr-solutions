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
                int j = 0;
                for (; i < s.size(); ) {
                    char c = s[i];
                    i++;
                    if (c != 'T' && c != 'F')
                        return false; // invalid expression
                    if ((j % 2) != 0)
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
    
    // Ask user for input
    std::cout << "Enter a boolean expression: ";
    
    char c;
    while ((c = getchar()) != '\n') {
        input += c;
    }
    
    bool result = solveBoolean(input);
    
    if (result) {
        std::cout << "The resulting Boolean is true." << std::endl;
    } else {
        std::cout << "The resulting Boolean is false." << std::endl;
    }
    
    return 0;
}