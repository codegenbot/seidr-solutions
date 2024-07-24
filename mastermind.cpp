int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        bool found = false;
        for (char d : guess) {
            if (c == d && !found) {
                found = true;
            } else if (c == d) {
                white++;
                break;
            }
        }
    }

    return black + white - black;
}