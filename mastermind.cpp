int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == code[i] && i != j) {
                    whitePegs++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                blackPegs++;
            }
        }
    }

    return blackPegs - whitePegs;
}