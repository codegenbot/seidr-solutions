int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // Correct color and correct place
            blackPegs++;
        } else {
            bool inCode = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[i] == code[j] && !inCode) {
                    inCode = true;
                }
            }
            if (!inCode) {
                // Correct color, wrong place
                whitePegs++;
            }
        }
    }

    return {blackPegs, whitePegs};
}