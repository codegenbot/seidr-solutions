#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    int codeCount[6] = {0};
    for (char c : code) {
        codeCount[c - '0']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i] - '0']--;
            guessCount[guess[i] - '0']--;
            int wrongCount = 0;
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i]) {
                    wrongCount++;
                }
            }
            white += wrongCount;
        }
    }

    return black + white;
}