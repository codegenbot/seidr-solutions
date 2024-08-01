int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors at wrong positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = 'X'; // mark as used
            guess[i] = 'X';
        }
    }

    // Count the number of correct colors at right positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            white++;
            code[i] = 'X'; // mark as used
            guess[i] = 'X';
        }
    }

    return black + white - 2;
}