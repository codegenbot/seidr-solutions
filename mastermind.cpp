#include <vector>
#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0) {
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return {white, black};
}