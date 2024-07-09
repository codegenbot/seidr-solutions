#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1 || count == 1 && blackPegs > 0) {
            continue;
        } else if (count == 1) {
            whitePegs++;
        }
    }

    return {blackPegs, whitePegs};
}