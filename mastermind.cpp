#include <vector>
#include <iostream>
#include <string>
#include <utility>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of correct colors (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for(int j = 0; j < 4; j++) {
                if(guess[j] == code[i] && !found) {
                    found = true;
                    whitePegs++;
                }
            }
        }
    }

    // Subtract the correct colors (black pegs)
    blackPegs -= whitePegs;

    return std::make_pair(whitePegs, blackPegs);
}