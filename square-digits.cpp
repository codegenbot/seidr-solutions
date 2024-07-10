```cpp
#include <string>

int main() {
    std::cout << squareDigits("123") << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = (c - '0') * (c - '0'); 
        output += std::to_string(digit);
    }
    return output;
}