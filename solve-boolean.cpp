```c++
#include <string>
#include <iostream>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = !result;
            result = true;
        } else if (s[i] == '&') {
            if (!result) return false;
            result = false;
        }
    }
    return result;
}

int main() {
    std::string s = "T|F&";
    bool result = solveBoolean(s);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}