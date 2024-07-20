int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark the position as visited
            guess[i] = ' '; // mark the position as visited
        }
    }

    // Count the number of correct colors in right places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors in wrong places
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                count++;
            }
        }
        if (count > 1 && code[i] != guess[i]) {
            white++;
        }
    }

    return black + white;
}