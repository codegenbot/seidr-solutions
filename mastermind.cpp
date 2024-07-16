#include <iostream>
#include <string>

int main() {
    std::string codeStr, guessStr;
    
    // Read user input...
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;
    std::cout << "Enter the guess: ";
    std::cin >> guessStr;

    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[6] = {0};

    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c - '0']++;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        } else if ('0' <= guessStr[i] && guessStr[i] <= '5') {
            whitePegs += codeCount[guessStr[i] - '0']--;
        }
    }

    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}