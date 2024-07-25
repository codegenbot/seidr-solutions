int getMastermindClue(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for(int i=0; i<6; i++) {
        char c = (char)('A' + i);
        int codeCount = 0;
        int guessCount = 0;

        for(int j=0; j<4; j++) {
            if(code[j] == c) codeCount++;
            if(guess[j] == c) guessCount++;
        }

        whitePegs += min(codeCount, guessCount);
    }

    return blackPegs;
}