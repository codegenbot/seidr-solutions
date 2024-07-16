```cpp
#include <sstream>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    std::stringstream ss(s);
    ss >> boolalpha;

    for (int i = 0; i < s.size(); ++i) { 
        char c = s[i]; 
        if (c == '|') {
            int ch;
            ss >> nosboolalpha >> ch >> boolalpha;
            result = result || ch;
        } else if (c == '&') {
            int ch;
            ss >> nosboolalpha >> ch >> boolalpha;
            result = result && ch;
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