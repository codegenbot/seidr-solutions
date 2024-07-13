int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count the number of correct colors in the wrong places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors in the right places
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i] - 'A']++;
        guessCount[guess[i] - 'A']++;
    }
    for (int i = 0; i < 6; ++i) {
        white += min(codeCount[i], guessCount[i]);
    }

    return black + white;
}