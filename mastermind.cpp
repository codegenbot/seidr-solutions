int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = 'X';
            guess[i] = 'X';
        }
    }

    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (char c : code) {
            if (c == guess[i]) {
                count++;
            }
        }
        white += min(count, 1);
    }

    return black + white - black;
}