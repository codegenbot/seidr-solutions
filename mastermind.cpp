int mastermind(const char* code, const char* guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i] && j != i) {
                    whitePegs++;
                    break;
                }
            }
        }
    }

    return blackPegs + whitePegs;
}