int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = 'x';
            guess[i] = 'x';
        }
    }

    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (code[i] == guess[j]) {
                white++;
                code[i] = 'x';
                guess[j] = 'x';
                break;
            }
            j++;
        }
    }

    return black + white - 2 * black;
}