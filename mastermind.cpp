#include <iostream>
#include <string>

int main() {
    std::string codeStr, guessStr;

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        } else if (std::count(codeStr.begin(), codeStr.end(), guessStr[i]) > 0) {
            whitePegs++;
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}