#include <vector>
#include <iostream>
#include <string>

int masterMind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    // Count number of correct colors in wrong positions (white pegs)
    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d && code.find(d) != guess.find(c)) {
                count++;
            }
        }
        white += count;
    }

    // Count number of correct colors in correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return {black, white};
}