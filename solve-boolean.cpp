```cpp
#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    int i = 0;
    bool result = true;
    
    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            i++;
        } else if (expression[i] == 'F') {
            result = false;
            i++;
        } else if (expression[i] == '&') {
            i++; // Skip &
            bool temp = true;
            while (i < expression.length() && expression[i] != '|') {
                if (expression[i] == 'T') {
                    temp = true;
                    i++;
                } else if (expression[i] == 'F') {
                    temp = false;
                    break;
                }
            }
            if (!temp) result = false;
        } else if (expression[i] == '|') {
            i++; // Skip |
            bool temp1 = true, temp2 = true;
            while (i < expression.length() && expression[i] != '&') {
                if (expression[i] == 'T') {
                    temp1 = true;
                    i++;
                } else if (expression[i] == 'F') {
                    temp1 = false;
                    break;
                }
            }
            if (!temp1) result = temp2;
        }
    }
    
    return result;
}

int main() {
    std::cout << solveBoolean("T&T|F") << std::endl;
    return 0;
}