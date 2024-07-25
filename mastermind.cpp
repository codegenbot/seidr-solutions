int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors and positions for black pegs
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    // Count correct colors but wrong position for white pegs
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(code[i] == guess[j]) {
                code[i] = ' ';
                guess[j] = ' ';
                white++;
            }
        }
    }

    return black + white;
}