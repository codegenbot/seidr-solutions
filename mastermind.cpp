int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; ++i) {
        int count_code = 0;
        int count_guess = 0;

        for(int j = 0; j < 4; ++j) {
            if(code[j] == (char)(i + 'A')) {
                count_code++;
            }
            if(guess[j] == (char)(i + 'A')) {
                count_guess++;
            }
        }

        white += min(count_code, count_guess) - black;
    }

    return white, black;
}