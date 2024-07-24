#include <vector>
#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code.erase(i, 1);
            guess.erase(i, 1);
            --i;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                code.erase(j, 1);
                j--;
                break;
            }
            j++;
        }
    }

    return blackPegs;
}