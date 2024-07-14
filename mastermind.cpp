int masterMind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code.replace(i, 1, "#");
            guess.replace(i, 1, "#");
        }
    }

    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j])
                count++;
        }
        if (count > 0 && code[i] != '#')
            white += min(count, 1);
    }

    return black + white - black;
}