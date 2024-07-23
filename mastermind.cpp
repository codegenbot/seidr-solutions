int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count white pegs first
    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i] && c != code[i]) {
                white++;
                break;
            }
        }
    }

    // Count black pegs now
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return black;

}