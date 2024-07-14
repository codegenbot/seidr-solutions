int mastermind(const char* code, const char* guess) {
    int black = 0;
    int white = 0;

    // Count correct characters that are in the same position (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct characters that are not in the same position (white pegs)
    for (int i = 0; i < 4; ++i) {
        int foundInCode = false;
        for (int j = 0; j < 4; ) {
            if (code[j] == guess[i]) {
                foundInCode = true;
                break;
            }
            j++;
        }

        if (foundInCode && code[i] != guess[i]) {
            white++;
        }
    }

    return black + white;
}