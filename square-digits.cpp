```c++
#include <string>

int main() {
    std::string input = "25";
    std::cout << squareDigits(input) << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        std::string squared = std::to_string(digit * digit);
        input = input.substr(0, i) + squared + input.substr(i+1);
        i += (int)squared.length();
    }
    return input;
}