int getMastermindCode(int code[4], int guess[4]) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == code[i] && i != j) {
                    found = true;
                    break;
                }
            }
            if (!found) whitePegs++;
        }
    }

    return {whitePegs, blackPegs};
}