int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        int countCode = 0;
        int countGuess = 0;

        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j]) {
                countCode++;
                countGuess++;
            }
        }

        black += min(countCode, countGuess);
    }

    white = 4 - black;
    return make_pair(white, black).second;
}