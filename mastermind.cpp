int Mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of white pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
            code[i] = 'X';  // Mark as used
            guess[i] = 'X';
        }
    }
    
    // Count the number of black pegs
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i] && code[j] != 'X') {
                ++count;
            }
        }
        white -= count;
    }
    
    return black + white;
}