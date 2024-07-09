```cpp
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (int i = 0; i < input.length(); i++) {
        output += std::to_string(stoi(std::string(1, input[i])) * stoi(std::string(1, input[i])));
    }
    return output;
}

int main() { 
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);
    std::cout << "Squared digits: " << squareDigits(input) << std::endl;
    return 0;
}