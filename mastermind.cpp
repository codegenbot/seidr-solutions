int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; i++) {
        int countCode = 0, countGuess = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == i+'0' || code[j] == i+'A'-10) countCode++;
            if(guess[j] == i+'0' || guess[j] == i+'A'-10) countGuess++;
        }
        white += min(countCode, countGuess);
    }

    return black + (4 - black);
}