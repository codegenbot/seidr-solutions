```cpp
#include <string>
#include <iostream>

bool solveBoolean(string s) {
    bool res = false;
    for (char c : s) {
        if (c == 'T') res = true;
        else if (c == 'F') break;
        else if (c == '|') res = !res;
        else if (c == '&') res &= true;
    }
    return res;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    bool result = solveBoolean(s);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}