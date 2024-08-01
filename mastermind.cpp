#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, bool> seen;
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == code[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            white++;
        }
    }

    return black + white;
}