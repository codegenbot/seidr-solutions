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
    char codeArray[5];
    for (int i = 0; i < 4; i++) {
        codeArray[i] = codeStr[i];
    }
    codeArray[4] = '\0';

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    int count = 0;
    for (int i = 0; i < 6; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guessStr[i] == codeArray[j]) {
                whitePegs++;
                found = true;
                break;
            }
        }
        if (!found) blackPegs--;
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}