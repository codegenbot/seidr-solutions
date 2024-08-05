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
        for (char d : code) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1 || count == 1 && black > 0) continue;
        white++;
    }

    return {white, black};
}