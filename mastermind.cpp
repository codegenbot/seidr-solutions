int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int count = 0;
            for (int j = 0; j < 4; ++j) {
                if (code[i] == guess[j])
                    count++;
            }
            white += count;
        }
    }

    return black;