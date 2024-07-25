int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1 && c != guess[0] && c != guess[1] && c != guess[2] && c != guess[3]) {
            white += count - 1;
        } else if (count == 1) {
            for (int i = 0; i < 4; i++) {
                if (c == code[i]) {
                    black++;
                    break;
                }
            }
        }
    }

    return black + white;
}