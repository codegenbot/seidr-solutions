#include <algorithm>

int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        bool codeCharIsInGuess = false;
        for (char c : guess) {
            if (c == code[i]) {
                codeCharIsInGuess = true;
                break;
            }
        }

        if (code[i] == guess[i] && !codeCharIsInGuess) {
            ++black;
        } else if (codeCharIsInGuess) {
            ++white;
        }
    }

    return black + white;
}