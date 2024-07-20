int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 0 && find(guess.begin(), guess.end(), c) != guess.end()) {
            white++;
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return {black, white};
}