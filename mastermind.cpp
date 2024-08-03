std::pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        bool colorFound = false;
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j]) {
                colorFound = true;
                break;
            }
        }
        if (!colorFound) continue;

        whitePegs++;
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return std::make_pair(blackPegs, whitePegs);
}