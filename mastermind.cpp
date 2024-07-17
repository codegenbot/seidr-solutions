int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }

    for (char c : guess) {
        if (count(code.begin(), code.end(), c) > 0) {
            ++whitePegs;
        }
    }

    return whitePegs - blackPegs;
}