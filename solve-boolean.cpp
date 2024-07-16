```cpp
#include <sstream>
#include <iostream>

bool solveBoolean(const std::string& s) {
    bool result = true;
    std::stringstream ss(s);

    for (char c; ss >> c;) { 
        if (c == '|') {
            char nextChar;
            ss >> nosboolalpha >> nextChar >> boolalpha;
            result = result || (nextChar == 'T');
        } else if (c == '&') {
            char nextChar;
            ss >> nosboolalpha >> nextChar >> boolalpha;
            result = result && (nextChar == 'T');
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