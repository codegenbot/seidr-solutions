int solve(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for(int i=0; i<6 && whitePegs < 4-blackPegs; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == (char)(i+97)) {
                count++;
            }
        }
        if(count > 1) {
            whitePegs += count - 1;
        } else {
            whitePegs += count;
        }
    }

    return blackPegs, whitePegs;
}