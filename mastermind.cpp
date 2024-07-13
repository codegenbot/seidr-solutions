int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            guess[i] = 'x'; // mark as used in the guess
            code[i] = 'x';   // mark as used in the code
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int colorCount = 0;
        for (char c : code) {
            if (c == guess[i]) {
                colorCount++;
            }
        }
        if (colorCount > 0 && guess[i] != 'x') {
            white = min(white, colorCount);
        }
    }

    return {black, white};
}