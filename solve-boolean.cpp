```cpp
#include <sstream>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    std::stringstream ss(std::string(s)); 

    for (int i = 0; i < s.size(); ++i) { 
        char c = s[i]; 
        if (c == '|') {
            char ch;
            ss >> ch;
            result = result || (ch == 'T');
        } else if (c == '&') {
            char ch;
            ss >> ch;
            result = result && (ch == 'T');
        }
    }
    
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, s);
    bool result = solveBoolean(s);
    if (result) {
        std::cout << "The result is true." << std::endl;
    } else {
        std::cout << "The result is false." << std::endl;
    }
    return 0;
}