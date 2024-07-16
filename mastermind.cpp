```cpp
#include <iostream>
#include <string>

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
        } else {
            int count = 0;
            for (int j = 0; j < 4; j++) {
                if (codeStr[j] == guessStr[i]) {
                    count++;
                }
            }
            if (count > 0) {
                whitePegs++;
            }
        }
    }

    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}