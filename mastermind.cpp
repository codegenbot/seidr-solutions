int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i] && j != i) {
                    white++;
                    break;
                }
            }
        }
    }

    return black + white - 2;
}