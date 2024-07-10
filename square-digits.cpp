```cpp
#include <string>

int main() {
    std::cout << squareDigits("123") << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        output += c; 
    }
    return output;
}