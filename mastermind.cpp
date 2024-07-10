#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            guess[i] = ' '; // Avoid counting the same peg twice
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                count++;
            }
        }
        white += count - black;
    }

    return std::make_pair(white, black).second;
}