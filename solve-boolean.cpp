#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    std::string temp;
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            temp += c;
        } else if (c == '|') {
            if (!result) {
                return false;
            }
            while (temp.back() != '|') {
                if (temp.back() == '&') {
                    return false; // invalid expression
                }
                temp.pop_back();
            }
            result = false;
            temp.pop_back(); // remove the last character, which is '|'
        } else if (c == '&') {
            if (!result) {
                return false;
            }
            while (temp.back() != '&') {
                if (temp.back() == 'F')
                    return false;
                if (temp.back() == '|')
                    return false; // invalid expression
                temp.pop_back();
            }
            result = true;
            temp.pop_back(); // remove the last character, which is '&'
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a boolean expression: ";
    std::cin >> input;
    
    bool result = solveBoolean(input);
    
    if (result) {
        std::cout << "The resulting Boolean is true." << std::endl;
    } else {
        std::cout << "The resulting Boolean is false." << std::endl;
    }
    
    return 0;
}