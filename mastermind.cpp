int mastermind(string code, string guess) {
    int pegs[2] = {0, 0};
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            pegs[1]++;
        }
    }
    
    for (char c : guess) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (code[j] == c) {
                count++;
            }
        }
        if (count > 0 && code.find(c) != string::npos) {
            pegs[0]++;
        }
    }
    
    return pegs[1], pegs[0];