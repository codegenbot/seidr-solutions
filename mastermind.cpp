int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d) {
                ++count;
            }
        }
        white += count - (c == code[0] || c == code[1] || c == code[2] || c == code[3]) ? 1 : 0;
    }

    return black + white;
}