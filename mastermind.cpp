int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (c == code[j]) {
                count++;
            }
        }
        white += (count > 1 ? 1 : 0);
    }

    return black + white - black;
}