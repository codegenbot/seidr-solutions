int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count white pegs (correct color, wrong place)
    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[i] == guess[j]) {
                count++;
            }
        }
        white += min(count, 1);
    }

    // Count black pegs (correct color, correct place)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    return white, black;
}