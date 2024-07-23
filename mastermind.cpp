pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    int codeColorCount[6] = {0};
    int guessColorCount[6] = {0};
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeColorCount[(int)(code[i] - '0')]++;
            guessColorCount[(int)(guess[i] - '0')]++;
        }
    }
    
    for(int j = 0; j < 6; j++) {
        if(codeColorCount[j] > 0 && guessColorCount[j] > 0) {
            whitePegs += min(codeColorCount[j], guessColorCount[j]);
        }
    }
    
    return std::make_pair(blackPegs, whitePegs);
}