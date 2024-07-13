int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (int i = 0; i < 6; i++) {
        int countCode = 0;
        int countGuess = 0;

        for (int j = 0; j < 4; j++) {
            if (code[j] == char(i + '0')) {
                countCode++;
            }
            if (guess[j] == char(i + '0')) {
                countGuess++;
            }
        }

        whitePegs += min(countCode, countGuess) - blackPegs;
    }

    return {whitePegs, blackPegs};
}