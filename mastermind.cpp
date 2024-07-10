#include <vector>
#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of correct colors in wrong positions
    for (char c : code) {
        if (guess.find(c) != std::string::npos && code.find(c) != guess.find(c)) {
            whitePegs++;
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return {blackPegs, whitePegs};
}