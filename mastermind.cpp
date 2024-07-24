#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            whitePegs++;
            code[i] = ' '; // mark as used
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in correct places (black pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // mark as used
            guess[i] = ' ';
        }
    }

    return whitePegs, blackPegs;
}