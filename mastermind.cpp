#include <iostream>
#include <algorithm>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i]) {
                count++;
            }
        }
        if (count > 1 && c != code[0] && c != code[1] && c != code[2] && c != code[3]) {
            white++;
        }
    }

    return black;
}