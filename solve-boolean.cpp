```c++
#include <string>
#include <iostream>

bool solveBoolean(const char* s) {
    bool result = true;
    for (int i = 0; i < strlen(s); i++) {
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
    bool result = solveBoolean(s.c_str());
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}