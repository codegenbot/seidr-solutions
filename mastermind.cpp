int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 6; i++) {
        char c = (char)('A' + i);
        int code_count = count(code.begin(), code.end(), c);
        int guess_count = count(guess.begin(), guess.end(), c);

        white += min(code_count, guess_count) - black;
    }

    return {white, black};
}