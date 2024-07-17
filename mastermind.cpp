int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int j = 0;
            while (j < 4) {
                if (guess[j] == code[i] && guess[j] != guess[i]) {
                    white++;
                    break;
                }
                j++;
            }
        }
    }

    return black + white - 2;
}