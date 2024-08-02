#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            auto count_guess = std::count(guess.begin(), guess.end(), code[i]);
            if (count_guess > 0) white += count_guess;
        }
    }

    return black + white;
}