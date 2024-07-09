int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        string temp = "";
        for (int j = 0; j < 4; j++) {
            if (guess[j] != code[i]) {
                temp += guess[j];
            }
        }
        
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (temp.find(guess[j]) != string::npos) {
                count++;
            }
        }
        
        white = max(white, count);
    }
    
    return make_pair(black, white).second;
}