```cpp
#include <iostream>
#include <string>

int main() {
    char code[5], guess[5];

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;

    std::cout << "Enter your guess: ";
    std::cin >> guess;

    int blackPegs = 0, whitePegs = 0;
    std::string codeStr(code);
    std::string guessStr(guess);

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (codeStr[j] == guessStr[i]) {
                found = true;
                break;
            }
        }
        if (!found) whitePegs++;
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}