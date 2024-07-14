#include <vector>
#include <iostream>
#include <string>

bool evaluateBoolean(const std::string& input) {
    bool result = true;
    for (char c : input) {
        if (c == '&') {
            result &= false;
        } else if (c == '|') {
            result |= true;
        } else if (c == 'f' || c == 'F') {
            result = false;
        } else if (c == 't' || c == 'T') {
            result = true;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << (evaluateBoolean(input) ? "True" : "False") << std::endl;
    return 0;
}