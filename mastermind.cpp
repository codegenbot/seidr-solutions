int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        char ch = code[i];
        int guessCount = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == ch) {
                guessCount++;
            }
        }
        count += (guessCount > 0);
    }
    return count;
}