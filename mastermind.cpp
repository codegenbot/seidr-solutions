int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (code[i] == c && !found) {
                found = true;
            } else if (code[i] == c) {
                white++;
            }
        }
    }

    return black + white - black;
}