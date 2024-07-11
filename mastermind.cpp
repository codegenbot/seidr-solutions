int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors at wrong places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    // Count the number of correct colors at correct places
    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i] && code[i] != guess[i]) {
                ++count;
            }
        }
        white += count;
    }

    return black + white;
}