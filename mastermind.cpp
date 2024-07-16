#include <vector>
#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[j] == code[i] && j != i) {
                    whitePegs++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                whitePegs++;
            }
        }
    }

    return blackPegs + 4 - whitePegs;
}