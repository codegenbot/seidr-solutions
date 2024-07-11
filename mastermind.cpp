#include <iostream>
#include <string>

bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}

int main() {
    std::string code, guess;
    
    std::cout << "Enter the code: ";
    std::cin >> code;
    
    std::cout << "Enter the guess: ";
    std::cin >> guess;
    
    // Call the function to calculate the number of white and black pegs
    
    return 0;
}