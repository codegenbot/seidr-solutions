#include <string>
int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 && code.find(c) == std::string::npos) {
            white++;
        }
    }

    return black + white;
}