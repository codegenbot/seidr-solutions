#include <vector>
#include <iostream>
#include <string>

bool evaluateBoolExp(std::string exp) {
    bool result = true;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '&') {
            if (i + 1 < exp.length() && exp[i + 1] == 'T') {
                result &= true;
            } else {
                result &= false;
            }
            i++; // skip the '&' character
        } else if (exp[i] == '|') {
            if (i + 1 < exp.length() && exp[i + 1] == 'T') {
                result |= true;
            } else {
                result |= false;
            }
            i++; // skip the '|' character
        }
    }
    return result;
}

int main() {
    std::string exp;
    std::cout << "Enter a Boolean expression (e.g., t, f, f&f): ";
    std::cin >> exp;
    bool result = evaluateBoolExp(exp);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}