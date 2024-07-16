```cpp
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

    for (char c : guessStr) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (c == codeStr[j] && guessStr[j] != codeStr[j]) {
                whitePegs++;
                count++;
            }
        }
        blackPegs -= count;
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}