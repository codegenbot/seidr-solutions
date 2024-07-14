int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == (char)(i + 'A' - 1) && code.find((char)(i + 'A' - 1)) != string::npos) {
                count++;
            }
        }
        white += count;
    }

    return black + (4 - black);
}