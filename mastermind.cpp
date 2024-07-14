int mastermind(const char* code, const char* guess) {
    int black = 0;
    int white = 0;

    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codeCount[code[i] - 'X']++;
            guessCount[guess[i] - 'X']++;
            black++;
        } else {
            if (guessCount[guess[i] - 'X'] > 0) {
                white++;
            } else {
                codeCount[guess[i] - 'X']++;
            }
        }
    }

    return black + white;
}