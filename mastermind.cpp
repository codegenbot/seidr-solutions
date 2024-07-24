int mastermind(const string& code, const string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (i != j && code[j] == guess[i]) {
                    whitePegs++;
                    break;
                }
            }
        }
    }

    return make_pair(whitePegs, blackPegs).second - blackPegs;
}