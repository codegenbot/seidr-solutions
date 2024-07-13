#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i])
                found = true;
        }
        if (!found)
            white++;
        else
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i])
                    black++;
            }
    }

    return black;
}