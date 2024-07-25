int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }
    
    map<char, int> codeCount, guessCount;
    
    for(int i=0; i<4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    
    for(int i=0; i<6; i++) {
        if(codeCount[i] > 0 && guessCount[i] > codeCount[i]) {
            white += (guessCount[i] - codeCount[i]);
        }
    }
    
    return black + white;
}