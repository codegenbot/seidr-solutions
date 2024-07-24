#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        int countCode = 0;
        int countGuess = 0;

        for (int j = 0; j < 4; ++j) {
            if (code[j] == 'A' + i) {
                countCode++;
            }
            if (guess[j] == 'A' + i) {
                countGuess++;
            }
        }

        whitePegs += std::min(countCode, countGuess);
    }

    return blackPegs - whitePegs;
}