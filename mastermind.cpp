#include <iostream>
#include <string>

bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}

int main() {
    std::string code, guess;
    
    std::cout << "Enter Mastermind code: ";
    std::cin >> code;
    
    std::cout << "Enter guess: ";
    std::cin >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != std::string::npos) {
            whitePegs++;
        }
    }
    
    std::cout << "White pegs: " << whitePegs << std::endl;
    std::cout << "Black pegs: " << blackPegs << std::endl;
    
    return 0;
}