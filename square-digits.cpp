#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output;
    
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string((c - '0') * (c - '0'));
        
    }
    return output;

}

int main() {
    std::string input;
    // Read user input
    // For simplicity let it be hardcoded for now
    input = "123";
    std::cout << squareDigits(input) << std::endl;  
    return 0;
}