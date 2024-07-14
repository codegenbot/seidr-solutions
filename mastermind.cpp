int mastermind(const char* code, const char* guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool foundInCode = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                foundInCode = true;
                break;
            }
        }

        if (foundInCode && code[i] != guess[i]) {
            white++;
        }
    }

    return black + white;
}