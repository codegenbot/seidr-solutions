int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    char codeArray[5], guessArray[5];
    strcpy(codeArray, code.c_str());
    strcpy(guessArray, guess.c_str());

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            black++;
            codeArray[i] = 'x';
            guessArray[i] = 'x';
        }
    }

    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (codeArray[j] == guessArray[i]) {
                count++;
            }
        }
        white += (count > 0) ? count - 1 : 0;
    }

    return black, white;
}