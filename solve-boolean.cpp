#include <string>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    for (auto c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            auto temp = s.find(c);
            if (temp != std::string::npos) c = s[temp + 1];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> input;
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}