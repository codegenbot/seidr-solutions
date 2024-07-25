#include <vector>
#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count correct colors in wrong places (white pegs)
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0) {
            whitePegs++;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return {blackPegs, whitePegs};
}