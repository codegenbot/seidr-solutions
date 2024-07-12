#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d && code.find(d) != code.find(c)) {
                ++count;
            }
        }
        white += count;
    }

    return black + white;
}