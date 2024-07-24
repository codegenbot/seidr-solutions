#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (char c : {"A", "B", "C", "D", "E", "F"}) {
        int countCode = 0;
        int countGuess = 0;

        for (int i = 0; i < 4; ++i) {
            if (code[i] == c) {
                countCode++;
            }
            if (guess[i] == c) {
                countGuess++;
            }
        }

        whitePegs += min(countCode, countGuess);
    }

    return blackPegs - whitePegs;
}