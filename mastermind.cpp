#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            guess[i] = ' '; // mark as used
            code[i] = ' '; // mark as used
        }
    }

    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (guess[j] == code[i]) {
                count++;
                guess[j] = ' '; // mark as used
            }
        }
        if (count > 0) white += count - 1;
    }

    return black + white;
}