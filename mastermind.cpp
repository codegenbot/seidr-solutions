int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (c == guess[i] && !found) {
                found = true;
            } else if (c == guess[i]) {
                white++;
                break;
            }
        }
    }

    return black + white;
}