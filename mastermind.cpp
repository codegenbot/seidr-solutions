int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }
    map<char,int> cMap;
    for(int i=0; i<4; i++) {
        cMap[code[i]]++;
    }
    for(int i=0; i<4; i++) {
        if(cMap[guess[i]] > 0) {
            white++;
            cMap[guess[i]]--;
        }
    }
    return black + white;
}