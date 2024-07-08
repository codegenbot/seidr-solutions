int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    map<char, int> codeMap;
    for (char c : code) {
        codeMap[c]++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]--;
            black++;
        } else {
            int count = 0;
            for (char c : "RGBYOW") {
                if (c == guess[i] && codeMap[c] > 0) {
                    codeMap[c]--;
                    count++;
                }
            }
            white += count;
        }
    }
    
    return black + white - 4;
}