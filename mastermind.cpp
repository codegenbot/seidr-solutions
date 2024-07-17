int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }
    
    for(int i=0; i<6; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == (char)(i+97)) {
                count++;
            }
        }
        if(count > 1) {
            white += count - 1;
        } else if(count == 1) {
            bool found = false;
            for(int k=0; k<4; k++) {
                if(code[k] == (char)(i+97)) {
                    black++;
                    found = true;
                    break;
                }
            }
            if(!found) {
                white++;
            }
        }
    }
    
    return black + white;
}