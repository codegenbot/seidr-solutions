int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // Mark as checked
            guess[i] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                code[j] = ' '; // Mark as checked
                if (i != j) white++;
                j++;
            }
            else j++;
        }
    }

    return black + white;
}