int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(code[i] == guess[j] && code[i] != guess[i]) {
                count++;
            }
        }
        white += count;
    }

    // Count correct colors in correct places (black pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    return black + white;
}