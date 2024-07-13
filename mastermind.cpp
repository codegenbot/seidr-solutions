#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d && c != code[guess.find(c)]) {
                white++;
                break;
            }
        }
    }

    return black + white;