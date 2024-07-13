int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    // Subtract the number of correct colors in correct positions from white
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            white--;
        }
    }

    return black + white;
}