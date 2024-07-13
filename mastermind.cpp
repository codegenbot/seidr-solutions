int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == (char)(i + 'A') && guess[j] == (char)(i + 'A')) {
                count++;
            }
            else if(code[j] == (char)(i + 'A')) {
                white += 1;
            }
        }
        black -= count;
    }

    return black;
}