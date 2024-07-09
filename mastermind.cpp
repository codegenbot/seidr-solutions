int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 0) {
            white++;
        }
    }

    white -= black;

    return make_pair(white, black).second;
}