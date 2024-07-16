```cpp
#include <iostream>
#include <string>
#include <algorithm>

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
        } else if (std::count(code.begin(), code.end(), guess[i]) > 0) {
            whitePegs++;
        }
    }

    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}