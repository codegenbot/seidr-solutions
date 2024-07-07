int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    whitePegs = 4 - blackPegs;
    return whitePegs;
}