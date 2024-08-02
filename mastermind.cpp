int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                ++count;
            }
        }
        white -= count;
    }

    return black + white;
}