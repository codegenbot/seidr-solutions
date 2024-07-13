#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 6; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == std::string(1, i) && guess[j] == std::string(1, i)) {
                count++;
            }
        }
        black += count;
    }

    return {black, white};
}