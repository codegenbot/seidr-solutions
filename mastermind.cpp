int getMastermindClue(string mastermindCode, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i = 0; i < 4; i++) {
        if(mastermindCode[i] == guess[i]) {
            blackPegs++;
        } else {
            int j = 0;
            while(j < 4) {
                if(mastermindCode[j] == guess[i] && j != i) {
                    whitePegs++;
                    break;
                }
                j++;
            }
        }
    }

    return make_pair(whitePegs, blackPegs).second - whitePegs;
}