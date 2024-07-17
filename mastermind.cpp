int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d && code.find(d) != code.nfind(d)) {
                whitePegs++;
                break;
            }
        }
    }

    return blackPegs << 2 | whitePegs;
}