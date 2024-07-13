int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            guess[i] = '#'; // mark this position as used
        }
    }

    // Count correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j] && guess[j] != '#') {
                count++;
            }
        }
        white += min(count, 1);
    }

    return make_pair(white, black).second;
}