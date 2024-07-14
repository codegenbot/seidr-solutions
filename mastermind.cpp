#include <vector>
#include <iostream>
#include <string>

int masterMind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            bool isCorrectColorInGuess = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[j] == code[i] && i != j) {
                    isCorrectColorInGuess = true;
                    break;
                }
            }
            if (!isCorrectColorInGuess) {
                ++whitePegs;
            }
        }
    }

    return blackPegs << 2 | whitePegs;
}