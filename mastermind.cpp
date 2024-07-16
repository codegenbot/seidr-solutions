int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1) {
            white += count - 1;
        } else if (count == 1 && black == 4) {
            continue;
        } else if (count == 1) {
            white++;
        }
    }

    return black + white;
}