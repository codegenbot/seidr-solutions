#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';  // mark as used
            guess[i] = ' ';  // mark as used
        }
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';  // mark as used
            guess[i] = ' ';  // mark as used
        }
    }

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                white++;
                code[j] = ' ';  // mark as used
                break;
            }
            j++;
        }
    }

    return std::make_pair(white, black).second;
}