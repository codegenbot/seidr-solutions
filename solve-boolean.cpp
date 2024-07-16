```cpp
#include <string>
bool solveBoolean(const std::string& s) {
    if (s.empty()) return false;
    bool result = true;
    int operand = 1; 
    for (int i = 0; i < s.size(); ++i) { 
        char c = s[i]; 
        if (c == '|') {
            result = result || (operand == 1);
            operand = 0;
        } else if (c == '&') {
            result = result && (operand == 1);
            operand = 0;
        } else if (c == 'T' || c == 't') {
            result = result && true;
            operand = 1;
        } else if (c == 'F' || c == 'f') {
            result = result && false;
            operand = 0;
        } else {
            if (operand == 1) {
                if (c == 'T' || c == 't') {
                    operand = 1;
                } else {
                    result = false;
                    break;
                }
            } else {
                if (c == 'F' || c == 'f') {
                    operand = 0;
                } else {
                    result = true;
                    break;
                }
            }
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