#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark as used
            guess[i] = ' '; // mark as used
        }
    }

    // Count the number of correct colors in correct places (black pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark as used
            guess[i] = ' '; // mark as used
        }
    }

    // Count the number of correct colors in wrong places (white pegs)
    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == guess[i]) {
                count++;
                code[j] = ' '; // mark as used
            }
        }
        white += (count > 1) ? 1 : 0;
    }

    return black + white;
}