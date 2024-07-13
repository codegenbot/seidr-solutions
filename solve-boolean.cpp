#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            while (i + 1 < s.length() && s[i+1] == '|') i++;
        } else if (s[i] == '&') {
            bool temp = result;
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            result &= temp;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> input;

    if (solveBoolean(input)) {
        std::cout << "The result is TRUE." << std::endl;
    } else {
        std::cout << "The result is FALSE." << std::endl;
    }

    return 0;
}