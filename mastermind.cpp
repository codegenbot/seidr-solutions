int mastermind(const char* code, const char* guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        int found = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i] && i != j) {
                found++;
            }
        }
        if (found > 0) {
            white += found;
        }
    }

    return black + white;
}