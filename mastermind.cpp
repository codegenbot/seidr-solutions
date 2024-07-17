int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int j = 0;
            while (j < 4) {
                if (code[j] == guess[i]) {
                    white++;
                    break;
                }
                j++;
            }
        }
    }

    return black + white - 4;
}