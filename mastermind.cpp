int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        char c1 = code[i];
        char c2 = guess[i];

        if (c1 == c2) {
            black++;
            continue;
        }

        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == c2) {
                count++;
            }
        }

        white += count;
    }

    return white + black;
}