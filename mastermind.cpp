int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (char c : code) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (c == guess[i] && !found) {
                found = true;
            } else if (c == guess[i]) {
                whitePegs++;
                break;
            }
        }
    }

    return blackPegs, whitePegs;
}