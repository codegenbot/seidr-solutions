#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            ++whitePegs;
        }
    }

    return blackPegs * 10 + whitePegs;
}