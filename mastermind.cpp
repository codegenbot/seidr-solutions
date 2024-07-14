int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for(int i = 0; i < 4; i++) {
        codeCount[code[i] - 'A']++;
        guessCount[guess[i] - 'A']++;
    }

    for(int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]) - black;
    }

    return white, black;
}