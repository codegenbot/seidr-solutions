#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0, black = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            bool matchFound = false;
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i] && !matchFound) {
                    white++;
                    matchFound = true;
                }
            }
        }
    }
    return std::make_tuple(white, black);
}