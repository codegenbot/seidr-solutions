#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    int codeCount[6] = {0};
    for (char c : code) {
        codeCount[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[guess[i] - 'A']--;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeCount[guess[i] - 'A'] > 0) {
            white++;
            codeCount[guess[i] - 'A']--;
        }
    }

    return black + white;
}