std::pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j] && code[i] != guess[i]) {
                whitePegs++;
                break;
            }
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return std::make_pair(blackPegs, whitePegs);
}