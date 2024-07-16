```cpp
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string codeStr, guessStr;
    int whitePegs = 0, blackPegs = 0;

    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        } else if (std::count(codeStr.begin(), codeStr.end(), guessStr[i]) > 0) {
            whitePegs++;
        }
    }

    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}