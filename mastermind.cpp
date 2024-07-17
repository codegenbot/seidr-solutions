int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<4; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[i] == code[j]) {
                count++;
            }
        }
        if(count > 1 || count == 0) {
            continue;
        }
        white += count - (code[i] == guess[i]);
    }

    return black + white;
}