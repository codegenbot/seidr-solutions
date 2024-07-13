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
            if(guess[j] == ((i + 1) % 6) + '0' && code[j] != ((i + 1) % 6) + '0') {
                count++;
            }
        }
        white += count;
    }

    return black + white;
}