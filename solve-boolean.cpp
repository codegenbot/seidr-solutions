```cpp
#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            i++;
        } else if (expression[i] == 'F') {
            result = false;
            i++;
        } else if (expression[i] == '|') {
            if (!result) return false;
            i++;
        } else if (expression[i] == '&') {
            result = true;
            i++;
        }
    }

    return result;
}

int main() {
    std::cout << solveBoolean("T&F|F") << std::endl;
    return 0;
}