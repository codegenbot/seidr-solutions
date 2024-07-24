int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places
    for (char c : code) {
        if (guess.find(c) != string::npos && code.find(c) != guess.find(c)) {
            white++;
        }
    }

    // Count the number of correct colors in correct places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return black, white;
}