#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; i++) {
        bool foundInCode = false;
        bool foundInGuess = false;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i]) {
                foundInCode = true;
            }
            if (guess[j] == code[i]) {
                foundInGuess = true;
            }
        }
        if (!foundInCode && foundInGuess) {
            white++;
        } else if (foundInCode && foundInGuess) {
            black++;
        }
    }

    return black;
}