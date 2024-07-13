int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap, guessMap;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    
    for(int i=0; i<6; i++) {
        if(codeMap.count((char)(i+65)) && codeMap[(char)(i+65)] > 0 && guessMap[(char)(i+65)] > 0) {
            count++;
            codeMap[(char)(i+65)]--;
            guessMap[(char)(i+65)]--;
        }
    }
    
    return 4 - count;
}