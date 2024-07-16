#include <iostream>
#include <string>

int main() {
    std::string code, guess;
    int whitePegs = 0, blackPegs = 0;

    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;

    std::cout << "Enter your guess: ";
    std::cin >> guess;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != std::string::npos) {
            whitePegs++;
        }
    }

    if (code.length() != 4 || guess.length() != 4) {
        std::cout << "Error: Code and guess must be 4 characters long." << std::endl;
    } else {
        std::cout << "Black pegs: " << blackPegs << std::endl;
        std::cout << "White pegs: " << whitePegs << std::endl;
    }

    return 0;
}