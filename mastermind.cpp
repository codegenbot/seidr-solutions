int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 1) {
            white++;
        }
    }

    // Count correct colors in correct places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return black, white;
}