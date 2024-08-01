#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i]) {
                    whitePegs++;
                    break;
                }
            }
        }
    }

    return blackPegs;
}