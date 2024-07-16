int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            int j = 0;
            while (j < 4) {
                if (guess[i] == code[j] && j != i) {
                    white++;
                    break;
                }
                j++;
            }
        }
    }
    
    return pair<int, int>(white - black, black);
}