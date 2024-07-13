int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            codeCount[code[i]-'A']++;
            guessCount[guess[i]-'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]);
    }
    
    return black + white;
}