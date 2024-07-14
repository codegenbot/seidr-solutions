int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        char c = code[i];
        if (c == guess[i]) {
            black++;
            continue;
        }
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (code[j] == c && code[j] != guess[i])
                count++;
        }
        white += count;
    }

    return black + white;
}