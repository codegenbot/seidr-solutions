int whitePegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        bool found = false;
        for(int j = 0; j < 4; j++) {
            if(code[j] == guess[i]) {
                found = true;
                break;
            }
        }
        if(found) {
            count++;
            code[i] = ' '; // mark as used
        }
    }
    return count;
}

int mastermind(string code, string guess) {
    int blackPegsCount = blackPegs(code, guess);
    int whitePegsCount = 4 - blackPegsCount;
    return make_pair(whitePegsCount, blackPegsCount).second;
}