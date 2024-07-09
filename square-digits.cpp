```cpp
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        char digit = c; 
        long long num = (long long)(digit * digit); // To avoid overflow
        output += std::to_string(num); 
    }
    return output;
}

int main() { 
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
    } else {
        std::string output = squareDigits(input);
        if (!output.empty() && output != "Error: Input number is too large.") {
            std::cout << "Squared digits: " << output << std::endl;
        }
        else
            std::cout << output << std::endl;
    }
    return 0;
}