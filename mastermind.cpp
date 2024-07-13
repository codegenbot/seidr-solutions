int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount;
    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeCount[code[i]]--;
        } else if (codeCount[guess[i]] > 0) {
            codeCount[guess[i]]--;
            count++;
        }
    }
    
    return count;
}