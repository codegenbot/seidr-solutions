int mastermind(string code, string guess) {
    int white = 0, black = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }
    for (char c : code) {
        bool found = false;
        for (int i = 0; i < 4; ++i) {
            if (guess[i] == c && !found) {
                ++white;
                found = true;
            }
        }
    }
    return black + white - black;
}