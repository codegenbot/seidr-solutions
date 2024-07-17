```cpp
#include <string>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::string num = "493193";  
    std::cout << squareDigitsStr(num) << std::endl;  
    return 0;
}