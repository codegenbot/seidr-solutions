#include <iostream>
#include <string>

int main() {
    std::string codeStr, guessStr;

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    int whitePegs = 0, blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    for (char c : codeStr) {
        int count = 0;
        for (char d : guessStr) {
            if (c == d) {
                count++;
                break;
            }
        }
        if (count == 0) blackPegs--;
        else whitePegs += count - 1;
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}