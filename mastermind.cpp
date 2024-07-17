#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        bool foundInCode = false;
        for (int i = 0; i < 4; i++) {
            if (code[i] == c) {
                foundInCode = true;
                break;
            }
        }
        if (!foundInCode) {
            white++;
        } else {
            black++;
        }
    }

    return black;
}