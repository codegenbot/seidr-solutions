int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark as used
            guess[i] = ' '; // mark as used
        }
    }

    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (char c : "BOYWG") {
            if (code.find(c) != string::npos && code.find(c) != string::npos) {
                count++;
                code.replace(code.find(c), 1, " ");
                guess.replace(guess.find(c), 1, " ");
            }
        }
        white += count;
    }

    return black + white;
}