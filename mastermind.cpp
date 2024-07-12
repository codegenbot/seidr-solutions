#include <string>
#include <algorithm>

struct MastermindResult {
    int black;
    int white;
};

MastermindResult mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    return {black, white};
}